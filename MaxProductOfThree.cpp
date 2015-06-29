#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    sort(A.begin(), A.end());
    
    int size = A.size();
    
    return max(A[0]*A[1]*A[size-1], A[size-3]*A[size-2]*A[size-1]);
}