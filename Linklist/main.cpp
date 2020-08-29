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

	for (int i = 0; i < 5; i++) {
		cout << "The current list is: ";
		l.print();
        cout<< "Head Item: " << l.headItem() <<endl;
        cout<< "Tail Item: " << l.tailItem() <<endl;
		cout << "Does 9 exist in the list?" << (l.exist(9) ? "Yes" : "No") << endl << endl;
		l.removeHead();
	}
    for (int i = 0; i < 5; i++) {
        cout << "The current list is: ";
        g.print();

    }
    
	return 0;

}
