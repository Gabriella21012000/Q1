//
// Created by Gabi Bondi on 01/03/2022.
//


using namespace std;
#include <iostream>
#include <string>
#include <list>

//Authors Elisheva Wolovitz and Gabriella Bondi

class Node;

//Answer: for each answer, the string, and the pointer to the node where to continue
class Answer {
public:
    string ans;
    Node* son;

    Answer(string s, Node* p) { ans = s; son = p; }
    //Answer(){ans = "No answer yet"; son = NULL; }
};

//Node: each node in the decision tree
class Node {
    //void removeSonValue(string v);
public:
    list<Answer*> answersList;
    string value;
    bool isLeaf;

    Node(string v) { isLeaf = true;  value = v; }

    friend class Tree;

};

//Answer: for each answer, the string, and the pointer to the node where to continue






