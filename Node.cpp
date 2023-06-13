#include "Node.h"

Node::Node(){
    link = nullptr;
    return;
}

int Node::getData(){
    return data;
}  
Node* Node::Next(){
    return link;
    
}

void Node::setNext (Node *newNext){
   link = newNext;
}
void Node::setData(int newData){
    data = newData;
}