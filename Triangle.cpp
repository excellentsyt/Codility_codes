#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    if(A.size() < 3)
        return 0;
    
    sort(A.begin(), A.end());
    
    for(unsigned int i = 0; i < A.size()-2; i++)
    {
        
        if((A[i] > 0) && ((long)(A[i] + A[i+1]) > A[i+2]))
            return 1;
    }
    
    return 0;
}