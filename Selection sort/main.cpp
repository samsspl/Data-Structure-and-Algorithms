//
//  main.cpp
//  selectionSort
//
//  Created by Sai sam Phyo linn on 7/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//
#include<iostream>
#include "Template_for_generating_num.h"
#include "selectionSort.hpp"


using namespace std;

int main(){
    
    int k[20];
    vector<int> vec = gen_seri_rand_num(1, 25, 20);
    int n = sizeof(k)/sizeof(int);
    cout<< "size of arr: "<< n<<endl;
    
    for(int i = 0; i < n; i++){
        k[i] = gen_rand(3,30); //gen_rand(start, end) start parameter will increase according to i.
    }
    cout<<"Before sorting arr: ";
    for(int j = 0; j < n; j++){
        cout<<k[j] <<" ";
    }
    cout<<endl;
    
    selectionSort(k,n);
    cout<<"After sorting arr: ";
    for(int j = 0; j < n; j++){
        cout<<k[j] <<" ";
    }
    cout<<endl;
    
    cout<<"Before sorting vec: ";
    for(vector<int>::iterator it = vec.begin(); it < vec.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl;
    selectionSort(vec);
    cout<<"After sorting vec: ";
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl;
    return 0;
    
}
