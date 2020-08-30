#include <iostream>
#include "simpleIntLinkedList.h"
using namespace std;

int main()
{
	List l;
    List g;

	l.insertHead(123);
	l.insertHead(11);
	l.insertHead(9);
	l.insertHead(1);
	l.insertHead(20);
    l.insertTail(35);
    l.insertTail(85);
    l.insertTail(66);
    l.insertTail(83);

    int n = l.sizeoflist();
	for (int i = 0; i < n; i++) {
		cout << "The current list is: ";
		l.print();
        cout<< "Head Item: " << l.headItem() <<endl;
        cout<< "Tail Item: " << l.tailItem() <<endl;
		cout << "Does 9 exist in the list?" << (l.exist(9) ? "Yes" : "No") << endl << endl;
		//l.removeHead();
        l.removeTail();
	}
    for (int i = 0; i < 5; i++) {
        cout << "The current list is: ";
        g.print();

    }
    
	return 0;

}
