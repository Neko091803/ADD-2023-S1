#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node{
public:
Node();
int getData();
Node *Next();

void setNext (Node *newNext);
void setData(int newData);

private:
int data;
Node* link;


};

#endif