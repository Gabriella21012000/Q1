//
// Created by Gabi Bondi on 01/03/2022.
//


using namespace std;
#include <iostream>
#include <string> // for string class
#include "Node.h"



//Answer: for each answer, the string, and the pointer to the node where to continue
class Answer
{
public:
    string ans;
    Node* son;
    Answer(string s, Node *p) { ans = s; son = p; }
    Answer(){ans = "No answer yet"; son = NULL; }
};






