#include <algorithm>

int solution(vector<int> &A) {
    if(A.size() == 1)
        return A[1];
    if(A.size() == 2)
        return abs(A[0] - A[1]);
    
    int sumPost = 0;
    // write your code in C++11
    for(int i = 1; i < A.size(); i++)
        sumPost += A[i];
        
    int sumPre = A[0];
    int diff = abs(sumPre - sumPost);
    int newDiff = 0;
    for(int j = 1; j < A.size(); j++)
    {
        sumPre += A[j];
        sumPost -= A[j];
        newDiff = abs(sumPre - sumPost);  
        if(newDiff < diff)
            diff = newDiff;
    }
    
    return diff;
}