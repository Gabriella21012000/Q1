#include <iostream>
#include <list>
#include <string>
#include "Node.h"
using namespace std;


class Tree
{
    Node *root;

    //Node* search(Node *p, string val, Node *&parent);
    //returns node t where the string equals val. If t has a prent, the pointer parent will contain its address.

    bool searchAndPrint(Node *p, string val);

    void print(Node *p, int level = 0){


    }

    void process(Node *p);

    Node* search(Node *p, string val, Node *&parent) {

        if (!p) {
            return NULL;
        }
        if (p->value == val){
            return p;
        }

        list<Answer*>::iterator it;
        for(it = p->answersList.begin(); it != p->answersList.end(); it++ ) {
            search((*it)->son,val,parent);
        }

    }

public:
    Tree() { root = NULL; }
    Tree(string s){
        root = new Node(s);
    }
    ~Tree() {
        deleteAllSubTree(root);
        root = 0;
    }
    void deleteAllSubTree(Node *t);
    void addRoot(string newval);
    bool addSon(string fatherquestion, string newanswer, string newval);
    void searchAndPrint(string val)
    {
        if (!searchAndPrint(root, val))
            cout << "Value not found" << endl;
    }

    void searchAndPrintArea(string val)
    {
        Node *parent;
        Node *area = search(root, val,parent);
        if (area) print(root);
    }

    bool addSon(string fatherquestion, string newanswer, string newval){
        Node *parent;
        Node *currentNode = search(root, fatherquestion,parent);
        if(currentNode != NULL){
            Node nextNode(newval); // if the node is found add a new node
            Node *ptrNextNode = &nextNode;
            Answer a = Answer(fatherquestion, ptrNextNode );
            Answer* ans = new Answer(newanswer, ptrNextNode);
            currentNode->answersList.push_back(ans); // add a new answer pointer to the list
            return true;
        }
        return false;
    }

    void printAllTree() { print(root); }
    string printToString(Node *p) {return "";}
    string printToString() { return printToString(root); }
    void deleteSubTree(string val);
    void process() { process(root); }

};