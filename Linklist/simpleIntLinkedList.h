#pragma once

class ListNode
{
private:
	int _item;
	ListNode *_next;

public:
	ListNode(int);
	int content() { return _item; };
	friend class List;
};

class List
{
private:
	int _size;
	ListNode *_head;
    ListNode *_tail;
public:
    List();
	~List();
    int sizeoflist();
	void insertHead(int);
	void removeHead();
	void print();
	bool exist(int);
	int headItem();
    void insertTail(int);
    void removeTail();
    int tailItem();
};
