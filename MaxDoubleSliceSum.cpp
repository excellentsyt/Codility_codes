#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int size = A.size();
    if(size <= 3)
        return 0;
    
    //Calculate the max ending and beginning matrix
    int *max_ending_array = new int[size];
    int *max_beginning_array = new int[size];
    max_ending_array[0] = max_ending_array[size-1] = max_beginning_array[0] = max_beginning_array[size-1] = 0;
    int max_ending = 0;
    int max_beginning = 0;
    int max_double = 0;
    
    for(int i=1; i<size-1; i++)
    {
        max_ending = max(0, max_ending+A[i]);
        max_ending_array[i] = max_ending;
    }
    
    for(int i=size-2; i>0; i--)
    {
        max_beginning = max(0, max_beginning+A[i]);
        max_beginning_array[i] = max_beginning;
    }

    for(int i=0; i<size-2; i++)
    {
        max_double = max(max_double, max_ending_array[i]+max_beginning_array[i+2]);
    }
  
    delete []max_ending_array;
    delete []max_beginning_array;
    
    return max_double;
}