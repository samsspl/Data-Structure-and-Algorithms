//
//  Sorting.hpp
//  Sorting
//
//  Created by Sai sam Phyo linn on 12/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#ifndef Sorting_hpp
#define Sorting_hpp

#include <vector>

template<typename T>
void swap(T *a, T *b);

template<typename K>
void buBBleSort(K [], int size);

template<typename K>
void buBBleSort(std::vector<K> &v);

template<typename L>
void inserTionSort(L [], int size);

template<typename L>
void inserTionSort(std::vector<L> &vec);

template<typename L>
void seletionSort(L [], int size);

template<typename L>
void selectionSort(std::vector<L> &m);

template<typename L>
void mergeSort(L [], int size);

template<typename L>
void mergeSort(std::vector<L> &n);


#endif /* Sorting_hpp */

