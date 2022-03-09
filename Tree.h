#include <iostream>
#include <list>
#include <string>
#include "Answer.h"
using namespace std;


class Tree
{
    Node* root;

    bool searchAndPrint(Node* p, string val) {
        Node* valNode = search(p, val, p);
        if (valNode != NULL)
        {
            print(valNode, 0);
            return true;
        }
        return false;
    }

    void print(Node* p, int level = 0)
    {

        if (!p)
        {
            return;
        }
        //checks if node is a leaf
        if (p->isLeaf)
        {
            //prints leaf answer and leaves function
            cout << "   " << p->value << endl;
            //return;
        }

        if (!(p->isLeaf)) {
            //if not empty tree and not a leaf prints node question
            cout << p->value << endl;
            //enters for loop to print each answer in the for loop
            for (auto it = p->answersList.begin(); it != p->answersList.end(); it++) {
                cout << ": " << (*it)->ans << endl;
                cout << "    ";
                print((*it)->son, level);
            }
        }
    }

    void process(Node* p) {

        //prints out the node question
        cout << p->value << endl;

        if (p->isLeaf) return;


            // if the node is not a leaf
        else {
            string ans;
            cin >> ans;

            // iterate through the list to find the answer
            list<Answer*>::iterator it; it = p->answersList.begin();
            while (ans != (*it)->ans) {
                it++;

            }
            p = (*it)->son;
            process(p);
        }
    }

    //Node* search(Node *p, string val, Node *&parent);
    //returns node t where the string equals val. If t has a prent, the pointer parent will contain its address.
    Node* search(Node* p, string val, Node*& parent) {

        if (!p) {
            return NULL;
        }
        if (p->value == val) {
            return p;
        }

        list<Answer*>::iterator it;
        for (it = p->answersList.begin(); it != p->answersList.end(); it++) {
            search((*it)->son, val, parent);
        }

    }

public:
    Tree() { root = NULL; }

    Tree(string s) {
        root = new Node(s);
    }

    ~Tree() {
        deleteAllSubTree(root);
        root = 0;
    }

    void addRoot(string newval) {
        this->root = new Node(newval);
    }

    void searchAndPrint(string val)
    {
        if (!searchAndPrint(root, val))
            cout << "Value not found" << endl;
    }

    void searchAndPrintArea(string val)
    {
        Node* parent;
        Node* area = search(root, val, parent);
        if (area) print(root);
    }

    bool addSon(string fatherquestion, string newanswer, string newval) {
        Node* parent;
        Node* currentNode = search(root, fatherquestion, parent);
        if (currentNode != NULL) {
            currentNode->isLeaf = false;
            auto it = currentNode->answersList.begin();
            while (it != currentNode->answersList.end())
            {
                it++;
            }
            // if the node is found add a new node
            Node* ptrNextNode = new Node(newval);
            //Answer a = Answer(fatherquestion, ptrNextNode );
            Answer* ans = new Answer(newanswer, ptrNextNode);
            currentNode->answersList.push_back(ans); // add a new answer pointer to the list
            return true;
        }
        return false;
    }

    void printAllTree() { print(this->root, 0); }

    string printToString(Node* p) { return ""; }

    string printToString() { return printToString(root); }

    void deleteSubTree(string val) {
        Node* subTreeNode = search(this->root, val, this->root);
        deleteAllSubTree(subTreeNode);
    }

    void deleteAllSubTree(Node* t)
    {
        if (!t) {
            return;
        }
        else
        {
            for (auto it = t->answersList.begin(); it != t->answersList.end(); it++) {
                deleteAllSubTree((*it)->son);
                delete (*it);
                (*it) = NULL;
            }
        }
    }

    void process() { process(root); }

};
