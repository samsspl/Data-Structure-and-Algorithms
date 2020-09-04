//
//  num_generator implementation file
//
//  Created by Sai sam Phyo linn on 2/9/20.
//  Copyright © 2020 Sai sam Phyo linn. All rights reserved.
//
//#include "Template_for_generating_num.h" //enabling this will throw error (redifinition error - for declearing function name twice)
//Instead of including .h file here, include this file .cpp in the header will do the trick.
#include <vector>

using namespace std;

vector<int> gen_seri_rand_num(int start, int end, int n){
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


int gen_rand(int start, int end){
    if(start == 0){
        return (rand() % end) + start;
    }else{
        int x = (rand() % end) + start;
        if(x > end){
            return x - start;
        }else{
            return x;
        }
        
    }

}
