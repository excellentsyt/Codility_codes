#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    if(A.size() == 0)
        return 0;
    else if(A.size() == 1)
        return 1;
        
    sort(A.begin(), A.end());
    
    int uniqueNum = 1;
    for(unsigned int i=1; i < A.size(); i++)
    {
        if(A[i] != A[i-1])
            uniqueNum++;
    }
    
    return uniqueNum;
}