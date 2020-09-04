//
//  main.cpp
//  num_generator
//
//  Created by Sai sam Phyo linn on 2/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//
#include<iostream>
#include "Template_for_generating_num.h"
#include "Sorting_.h"


using namespace std;

int main(){
    
    int k[20];
    vector<int> vec = gen_seri_rand_num(1, 45, 20);
    int n = sizeof(k)/sizeof(int);
    cout<< "size of arr: "<< n<<endl;
    
    for(int i = 0; i < n; i++){
        k[i] = gen_rand(3,10); //gen_rand(start, end) start parameter will increase according to i.
    }
    cout<<"Before sorting arr: ";
    for(int j = 0; j < n; j++){
        cout<<k[j] <<" ";
    }
    cout<<endl;
    
    Bubblesort(k, n);
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
    Bubblesort(vec);
    cout<<"After sorting vec: ";
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl;
    return 0;
    
}
