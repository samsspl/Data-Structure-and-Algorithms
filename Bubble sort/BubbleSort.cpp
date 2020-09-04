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
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                swapp(arr[i], arr[j]);
            }
        }
    }

}

void Bubblesort(std::vector<int> &v){

    long size = distance(v.begin(), v.end());
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(v[i] > v[j])
                swapp_(&v[i], &v[j]);
        }
    }

}
