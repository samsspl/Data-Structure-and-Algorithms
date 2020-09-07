//
//  InsertionSort.cpp
//  Insertionsort
//
//  Created by Sai sam Phyo linn on 7/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#include "InsertionSort.hpp"
#include <vector>

void insertionSort(int a[], int size){
    int i, j, key;
    for(i = 1; i < size; i++){
        key = a[i];
        for(j = i - 1; j>= 0 && a[j] > key; j--){
            a[j+1] = a[j];
        }
        a[j+1] = key;
    }
}
void insertionSort(std::vector<int> &v){
    int i, j, key;
    for(i = 1; i < v.size(); i++){
        j = i-1;
        key = v[i];
        while(j>= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
