#include <cmath>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    int middle=N, forward, backward;
    int dup = 0;
    
    //Find out same elements
    for(int i=1; i<N; i++)
    {
        if(A[i] == A[i-1])
            dup++;
    }
    
    
    //Find out same abs elements
    for(int i=0; i<N; i++)
    {
        if(A[i] < 0)
            continue;
        else
        {
            middle=i;
            break;
        }
    }
    if(A[middle] == 0)
        forward = middle + 1;
    else
        forward = middle;
        
     backward = middle - 1;
    
    while(forward < N && backward >=0)
    {
        if(abs(A[backward]) < A[forward])
            backward--;
        else if(abs(A[backward]) > A[forward])
            forward++;
        else
        {
            dup++;
            backward--;
            forward++;
            if(A[forward] == A[forward-1] && A[backward] == A[backward+1])
                dup--;
        }
    }
    
    return (N-dup);
}