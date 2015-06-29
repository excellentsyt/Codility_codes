#include <math.h>

vector<int> solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    
    int size = A.size();
    int *fib_array = new int[size+2];
    fib_array[0] = 0;
    fib_array[1] = 1;
    for(int i=2; i<=size+1; i++)
    {
        fib_array[i] = fib_array[i-1] + fib_array[i-2];   
    }
    
    vector<int> ret(size, 0);
    for(int i=0; i<size; i++)
    {
        ret[i] = fib_array[A[i]+1] & ((1<<B[i])-1);   
    }
    
    //delete []fib_array;
    return ret;
}