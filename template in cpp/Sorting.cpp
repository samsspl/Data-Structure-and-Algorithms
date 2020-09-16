//
//  Sorting.cpp
//  Sorting
//
//  Created by Sai sam Phyo linn on 12/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include "Sorting.hpp"
#include <iterator>

template<typename T> void swap(T *a, T *b){
    T tem = *a;
    *a = *b;
    *b = tem;
}

template<typename K>
void buBBleSort(K arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

template<typename K>
void buBBleSort(std::vector<K> &v){
    long len  = distance(v.begin(),v.end());
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(v[j] > v[j+1])
                swap(&v[j], &v[j+1]);
        }
    }
}

template<typename L>
void inserTionSort(L [], int size){
    
}

template<typename L>
void inserTionSort(std::vector<L> &vec){
    
}

template<typename L>
void seletionSort(L [], int size){
    
}

template<typename L>
void selectionSort(std::vector<L> &m){
    
}

template<typename L>
void mergeSort(L [], int size){
    
}

template<typename L>
void mergeSort(std::vector<L> &n){
    
}
