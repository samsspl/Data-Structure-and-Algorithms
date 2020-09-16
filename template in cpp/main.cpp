//
//  main.cpp
//  Sorting
//
//  Created by Sai sam Phyo linn on 12/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include<iostream>
#include "Sorting.hpp"
#include "Template_for_generating_num.h"


using namespace std;

int main(){
//    do_nth(true); // uncomment this for srand
    int k[20];
    float g[20];
    double h[20];
    vector<int> vec = gen_seri_rand_num(1, 45, 20);
    int size_of_k = sizeof(k)/sizeof(int);
    int size_of_g = sizeof(g)/sizeof(float);
    int size_of_h = sizeof(h)/sizeof(double);


    for(int i = 0; i < size_of_k; i++){
        k[i] = gen_rand(3,10); //gen_rand(start, end) start parameter will increase according to i.
    }
    for(int i = 0; i < size_of_g; i++){
        g[i] = gen_rand(3.1,10.5); //gen_rand(start, end) start parameter will increase according to i.
    }
    for(int i = 0; i < size_of_h; i++){
        h[i] = gen_rand(3.234,10.145); //gen_rand(start, end) start parameter will increase according to i.
    }

    cout<<"Before sorting int arr: ";
    print_arr(k, size_of_k);
    buBBleSort(k, size_of_k);
    cout<<"After sorting int arr: ";
    print_arr(k, size_of_k);
   
    cout<<"Before sorting float arr: ";
    print_arr(g, size_of_g);
    buBBleSort(g, size_of_g);
    cout<<"After sorting float arr: ";
    print_arr(g, size_of_g);
  
    cout<<"Before sorting double arr: ";
    print_arr(h, size_of_h);
    buBBleSort(h, size_of_h);
    cout<<"After sorting double arr: ";
    print_arr(h, size_of_h);
   
    cout<<"Before sorting vec: ";
    print_vec(vec);
    buBBleSort(vec);
    cout<<"After sorting vec: ";
    print_vec(vec);

    return 0;
    
}
