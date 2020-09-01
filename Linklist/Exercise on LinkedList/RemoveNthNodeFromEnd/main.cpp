//
//  main.cpp
//  RemoveNthNodeFromEnd
//
//  Created by Sai sam Phyo linn on 30/8/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    List k;
    k.insertHead(5);
    k.insertHead(4);
    k.insertHead(3);
    k.insertHead(2);
    k.insertHead(1);
    

    cout<< "before removing Nth node from the list: ";
    k.print(); cout<<endl;
    cout<< "after removing Nth node from the list: ";
    k.removedNthNodeFromEnd(4); // input = 1 - 5 to test since list k inserted 5 elements.
    k.print(); cout<<endl;

    return 0;
}
