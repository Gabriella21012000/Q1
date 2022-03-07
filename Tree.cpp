//
// Created by Gabi Bondi on 01/03/2022.
//

#include "Tree.h"
#include "Node.h"
#include <list>
#include "Answer.h"

//returns node t where the string equals val. If t has a parent, the pointer parent will contain its address.
Node* search(Node *p, string val, Node *&parent){



}

bool searchAndPrint(Node *p, string val){

}

void print(Node *p, int level = 0){
    cout << p->value << endl;
    std::list<Answer*>::iterator it;
    for(it = p->answersList.begin(); it != p->answersList.end(); it++ ){
        cout << it->ans << end;
    }
}

void process(Node *p){

}

void deleteAllSubTree(Node *t);

void addRoot(string newval){
    Tree(newNode);
}

bool addSon(string fatherquestion, string newanswer, string newval){
    Node* currentNode = search(fatherquestion); //see if you can find the node
    if(currentNode != NULL){
        Node nextNode(newval); // if the node is found add a new node
        Node* ptrNextNode = &nextNode;
        Answer* ans = new Answer(newanswer, ptrNextNode);
        currentNode->answersList.push_back(ans); // add a new answer pointer to the list
        return true;
    }
    return false;
}

string printToString(Node *p) {return "";}
void deleteSubTree(string val);