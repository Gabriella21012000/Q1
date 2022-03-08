//
// Created by Gabi Bondi on 01/03/2022.
//

using namespace std;
#include <iostream>
#include <string> // for string class
#include "Answer.h"
#include <list>


class Node {

    //void removeSonValue(string v);
    public:
        list<Answer*> answersList;
        string value;
        bool isLeaf;

        Node(string v) { isLeaf = true;  value = v; }

        friend class Tree;

};



