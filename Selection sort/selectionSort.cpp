//
//  selectionSort.cpp
//  selectionSort
//
//  Created by Sai sam Phyo linn on 7/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include "selectionSort.hpp"
#include <iterator>
#include <vector>


template<typename T>
void swap(T *a, T *b){
    T tem = *a;
    *a = *b;
    *b = tem;
}
void selectionSort(int arr[], int size){
    int key = 0;
    for(int i = 0; i < size-1; i++){
        key = i;
        for(int j = i; j < size; j++){
            if(arr[key] > arr[j])
                key = j;
        }
        swap(&arr[key], &arr[i]);
    }
}


void selectionSort(std::vector<int> &v){
    long k = distance(v.begin(),v.end()); //distance is in iterator header file
    for(int i = 0; i < k-1; i++){
        int key = i;
        for(int j = i; j < k; j++){
            if(v[key] > v[j])
                key = j;
        }
        swap(&v[key], &v[i]);
    }
}
