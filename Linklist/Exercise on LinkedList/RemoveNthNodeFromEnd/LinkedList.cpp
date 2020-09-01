//
//  LinkedList.cpp
//  RemoveNthNodeFromEnd
//
//  Created by Sai sam Phyo linn on 31/8/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

List::List(){
    _head = NULL;
    _size = 0;
};

int List::listSize(){
    return this->_size;
}

ListNode::ListNode(int n){
    next = NULL;
    val = n;
}

void List::insertHead(int m){
    ListNode *newNode = new ListNode(m);
    newNode->next = _head;
    _head = newNode;
    _size++;
}

void List::removeHead(){
    if(_size > 0){
        ListNode *tem = _head;
        _head = _head->next;
        delete tem;
        _size--;
    }
}

void ListNode::removeNodeAfter(){
    
    if(this->next != NULL){
        ListNode *after = this->next;
        ListNode *tmp = after->next;
        this->next = tmp;
        delete after;
    }
}
void List::removedNthNodeFromEnd(int index){
    ListNode *container = this->_head;
    if(index == _size){
        removeHead();
    }
    else if(index <= _size){
        int oneNodebefore = _size - index - 1;
        for(int i = 1; i <= oneNodebefore; i++){
            container = container->next;
        }
        container->removeNodeAfter();
        _size--;
    }
}

void List::print(){
    if(_size > 0){
        ListNode * tmp = _head;
        for(int i = 0; i < listSize(); i++){
            cout<< tmp->val << " ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
}

List::~List(){
    while(_size > 0){
        removeHead();
    }
}
