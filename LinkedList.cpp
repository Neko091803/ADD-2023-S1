#include "LinkedList.h"

    LinkedList::LinkedList(){
     head = nullptr;
   }
    LinkedList::LinkedList(int* array, int len){
        head = new Node();
        Node* node = head;
        for (int i = 0; i < len; i++){
            node->setData(array[i]);
            if (i! = len -1){
                node->setNext(new Node());
                node = node->Next();
            }
            else{
                node->setNext(nullptr);
            }
        }
          
    }

    LinkedList:: ~LinkedList(){
        Node* node = head;
        while (node != nullptr){
            Node *temp = node;
            node = node->Next();
            delete temp;
        
        }
    }
    void  LinkedList::insertPosition(int pos, int newNum){
            if (i <= pos){
                Node* NewHead = new Node();
                NewHead->setData(newNum);
                Newhead->setNext(new Node()); 
                 len++;
            }
    
            else if (i > len-1){
                append(newNum); 
            }
            else {
                Node *curr = head;
                int i = 1;
                while (i!=pos){
                    curr = curr->Next();
                    i++;
                }
            Node* newNum = new Node();
            newNum->setData(newNum);
            newNum->setNext(Next());
             len++;
            }
           
        }
    
    