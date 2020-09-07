//
//  selectionSort.hpp
//  selectionSort
//
//  Created by Sai sam Phyo linn on 7/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//

#pragma once
#include <vector>

template<typename T>
void swap(T *a, T *b);
void selectionSort(int [], int size);
void selectionSort(std::vector<int> &v);

//#include "selectionSort.hpp" //uncomment this if template throw errors
