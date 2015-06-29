#include <algorithm>
#include <cmath>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    //sort A
    sort(A.begin(), A.end());
    
    //if all positive
    if(A[0] >=0)
        return A[0] * 2;
        
    //if all negative
    if(A[N-1] < 0)
        return abs(A[N-1] * 2);
        
    //if mixed negative and positve
    int right = 0;
    int left = 0;
    for(int i=0; i<N; i++)
    {
        if(A[i] == 0)
            return 0;
        else if(A[i] > 0)
        {
            right = i;
            left = i - 1;
            break;
        }   
    }
    int minimum = min(abs(A[left]*2), A[right]*2);
    int sum = 0;
    while(left>=0 && right<N)
    {
        sum = A[right] + A[left];
        if(sum < 0)
        {
            right++;
        }
        else if(sum > 0)
        {
            left--;
        }
        else
            return 0;
        minimum = min(minimum, abs(sum));
    }
    
    return minimum;
}