#include <iostream>
#include "LinkedList/LinkedList.h"

int main() {
    LinkedList<int> *list = new LinkedList<int>();

    list->push(1);
    list->push(2);
    list->push(3);

    std::cout<<list->pop()<<std::endl;
    std::cout<<list->pop()<<std::endl;
    std::cout<<list->pop()<<std::endl;

    return 0;
}