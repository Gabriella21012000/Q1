//
// Created by Gabi Bondi on 01/03/2022.
//

/*#include "Tree.h"
#include "Node.h"
#include <list>
#include "Answer.h"*/

//returns node t where the string equals val. If t has a parent, the pointer parent will contain its address.
/*Node* search(Node *p, string val, Node *&parent) {

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

}*/

/*bool searchAndPrint(Node *p, string val){

}

void print(Node *p, int level = 0){

}*/

/*void process(Node *p){
    Answer answer;
    cout << p->value << endl;

    while(!(p->isLeaf)){
        cin >> answer.ans;

        list<Answer*>::iterator it;
        it = p->answersList.begin();
        while(answer.ans != (*it)->ans){
            if( it != p->answersList.end()){
                it++;
            }else{
                cout << "invalid answer";
                return;
            }
        }

        process((*it)->son);
    }
}*/

/*void deleteAllSubTree(Node *t);

void addRoot(string newval){
    Tree(newNode);
}





string printToString(Node *p) {return "";}

void deleteSubTree(string val);*/