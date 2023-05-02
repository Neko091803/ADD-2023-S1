#include "Node.h"

Node::Node(){
    link = nullptr;
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
void Node::setValue(int newValue){
    data = newValue;
}