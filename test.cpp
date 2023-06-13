#include <iostream>
#include <limits>
#include <vector>

#include "Node.h"
#include "LinkedList.h"


int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.insertPosition(1, 0); // 在第一个位置插入0
    list.insertPosition(4, 4); // 在最后一个位置插入4
    list.insertPosition(3, 2); // 在第三个位置插入2
    list.printList();
    return 0;
}