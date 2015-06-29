#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    
    //sort A in non-decreasing order
    sort(A.begin(), A.end());
    
    //loop from end to the front of A
    int counter = 0;
    int k;
    for(int i=0; i<N-2; i++)
    {
        k = i+2;
        for(int j=i+1; j<N-1; j++)
        {
            while(k<N && A[i] + A[j] > A[k])
                k++;
            counter += k - j - 1;
        }
    }
    
    return counter;
}