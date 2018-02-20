//
// Created by josh on 2/19/18.
//

#include "LinkedList.h"

template<class Type>
LinkedList<Type>::LinkedList() {
    LinkedList::head = nullptr;
    LinkedList::tail = nullptr;
    LinkedList::size = 0;
}

template<class Type>
void LinkedList<Type>::push(Type item) {
    auto *newNode = new Node();
    newNode->data = item;
    if (head != nullptr) {
        newNode->next = head;
        newNode->next->prev = newNode;
    }
    if (tail == nullptr) {
        tail = newNode;
        tail->prev = newNode;
        newNode->next = tail;
    }
    head = newNode;

    size++;
}

template<class Type>
Type LinkedList<Type>::pop() {
    if (this->getSize() == 0) {
        throw std::exception();
    }
    Type returnData = head->data;
    head = head->next;

    Node *toRemove = head->prev;
    head->prev = nullptr;
    delete toRemove;

    size--;
    return returnData;
}

template<class Type>
int LinkedList<Type>::getSize() {
    return size;
}