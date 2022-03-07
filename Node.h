//
// Created by Gabi Bondi on 01/03/2022.
//

#include <iostream>
#include <string> // for string class
using namespace std;
#include "Answer.h"
#include <list>


class Node {

    void removeSonValue(string v);
    public:
        list<Answer*> answersList;
        string value;
        bool isLeaf;

        Node(string v) { isLeaf = true;  value = v; }

        friend class Tree;

};



Node nextNode = node(val;
node* pointerNewNode = ( ))