#include <cmath>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    if(N == 0)
        return 0;
    if(N == 1)
        return A[0];
    
    vector<int> max(N, -10001*N);
    max[0] = A[0];
    
    for(int i=1; i<N; i++)
    {
        for(int j = i-6; j<i; j++)
        {
            if(j>=0 && max[j] + A[i] > max[i])
                max[i] = max[j] + A[i];
        }
    }
    
    return max[N-1];
}