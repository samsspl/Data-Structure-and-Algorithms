//
//  BubbleSort.cpp implementation file
//  num_generator
//
//  Created by Sai sam Phyo linn on 3/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include "Sorting_.h"
#include <iostream>
#include <vector>

using namespace std;

void swapp(int &a, int &b){
    int tem = a;
    a = b;
    b = tem;
    
}
template<typename T>
void swapp_(T *a, T *b){
    T tem = *a;
    *a = *b;
    *b = tem;
}

void Bubblesort(int arr[], int size){

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swapp(arr[j], arr[j+1]);
            }
        }
    }

}

void Bubblesort(std::vector<int> &v){

    long size = distance(v.begin(), v.end());
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(v[j] > v[j+1])
                swapp_(&v[j], &v[j+1]);
        }
    }

}
