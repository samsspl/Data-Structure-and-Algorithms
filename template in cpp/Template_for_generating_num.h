//
//  Template_for_generating_num.h
//  num_generator header
//
//  Created by Sai sam Phyo linn on 2/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//
#ifndef Template_for_generating_num_h
#define Template_for_generating_num_h

/*----------------------------------------------------------------------------------------------------------*/
void do_nth(bool n);  // for generating rand with srand;

std::vector<int> gen_seri_rand_num(int start, int end, int n); // this function will return a vec with rand nums

//int gen_rand(int start, int end);  // generate single rand num (including start and end number)

template<typename G>
G gen_rand(G start, G end);

template<typename T>
void print_arr(const T [], int size);

template<typename T>
void print_vec(const std::vector<T>& vec);

/*----------------------------------------------------------------------------------------------------------*/

#endif /* Template_for_generating_num_h */
