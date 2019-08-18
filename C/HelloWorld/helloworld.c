#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include<iostream>

using std::cout;
using std::endl;

int main(){

cout << "outside " << omp_get_num_threads() << endl;
#pragma omp parallel
    {
      cout << "inside  " << omp_get_num_threads() << endl;

#pragma omp critical
     {
        // cout << "level 2  " << omp_get_num_threads() << endl;
        cout << "hello from thread " << omp_get_thread_num() << endl;
     }
    }
}
