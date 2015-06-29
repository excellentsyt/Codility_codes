#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int max_slice_profit = 0;
    int max_day_profit = 0;
    int size = A.size();
    int day_profit = 0;
    
    for(int i=1; i<size; i++)
    {
        day_profit = A[i] - A[i-1];
        max_day_profit = max(0, max_day_profit+day_profit);
        max_slice_profit = max(max_slice_profit, max_day_profit);
    }
    
    return max_slice_profit;
}