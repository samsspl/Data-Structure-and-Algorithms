//
//  num_generator implementation file
//
//  Created by Sai sam Phyo linn on 2/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//
//#include "Template_for_generating_num.h" //enabling this will throw error (redifinition error - for declearing function name twice)
//Instead of including .h file here, include this file .cpp in the header will do the trick.

/*--------------------------------------------------------------------------------------------------------*/
//int gen_rand(int start, int end){
//    if(start == 0){
//        return (rand() % end) + start;
//    }else{
//        int x = (rand() % end) + start;
//        if(x > end){
//            return x - start;
//        }else{
//            return x;
//        }
//
//    }
//
//}
/*--------------------------------------------------------------------------------------------------------*/

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void do_nth(bool n){ // can call from main to activate srand
    if(n){
        srand((unsigned) time(0));
    }
}

vector<int> gen_seri_rand_num(int start, int end, int n){
//    do_nth(true); // uncomment this to generate srand type of rand for both vector or array
    vector<int> arr;
    for(int i = 0; i < n; i++){
        if(start == 0){
            arr.push_back((rand() % end) + start);
        }else{
            int x = (rand() % end) + start;
            if(x > end){
                arr.push_back(x - start);
            }else{
                arr.push_back(x);
            }
            
        }
    }
    return arr;
}

template<typename G>
G gen_rand(G start, G end){
    if(start == 0.0){
        G ran = (rand() % (int)(end*1000))/1000.0 + start;
        return ran;
    }else{
        G x = (rand() % (int)(end*1000))/1000.0 + start;
        if(x > end){
            return x - start;
        }else{
            return x;
        }
    }
}

template<typename T>
void print_arr(const T arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

template<typename T>
void print_vec(const std::vector<T>& vec){
    for(auto it : vec){
        cout<< it <<" ";
    }
    cout<<endl;
}










/* explicit instantiation */

template int gen_rand(int start, int end);
template float gen_rand(float start, float end);
template double gen_rand(double start, double end);

template void print_arr(const int [], int size); //explicit instantiation
template void print_arr(const float [], int size); //explicit instantiation
template void print_arr(const double [], int size); //explicit instantiation

template void print_vec(const std::vector<int>& vec);  //explicit instantiation
template void print_vec(const std::vector<float>& vec);  //explicit instantiation
template void print_vec(const std::vector<double>& vec);  //explicit instantiation
