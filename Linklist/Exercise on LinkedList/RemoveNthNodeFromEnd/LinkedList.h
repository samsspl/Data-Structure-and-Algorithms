//
//  LinkedList.h
//  RemoveNthNodeFromEnd
//
//  Created by Sai sam Phyo linn on 31/8/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#pragma once

class ListNode {
    
private:
    ListNode *next;
    int val;
    
public:
    ListNode(int);
    int getContent();
    void removeNodeAfter();
    friend class List;
};

class List{

private:
    ListNode *_head;
    int _size;

public:
    List();
    ~List();
    int listSize();
    void removedNthNodeFromEnd(int index);
    void insertHead(int);
    void removeHead();
    void print();
};
