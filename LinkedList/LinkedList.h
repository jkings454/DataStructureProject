//
// Created by josh on 2/19/18.
//

#ifndef DATASTRUCTUREPROJECT_LINKEDLIST_H
#define DATASTRUCTUREPROJECT_LINKEDLIST_H

#include <exception>

template <class Type>
class LinkedList {

    struct Node {
        Node *next;
        Node *prev;
        Type data;
    };

private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList();
    void push(Type item);
    Type pop();
    int getSize();
};


#endif //DATASTRUCTUREPROJECT_LINKEDLIST_H
