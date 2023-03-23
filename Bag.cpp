 #include "Bag.h"
 
 void Bag::addItem(int items){
    items.push_back(items);
 }
    int removeItem(){
        if (items.empty()){
            return -1;
        }
        srand((time(nullptr)))
        int index = rand()% items.size();
        int item = item[index];
        items.erase(items.begin()+index);
        return items;
    }