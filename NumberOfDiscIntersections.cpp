#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    vector<int> lower_limit_vector;
    vector<int> upper_limit_vector;
    
    // set up upper and lower limit arrays
    for(int i=0; i < N; i++)
    {
        lower_limit_vector.push_back(i - A[i]);
        upper_limit_vector.push_back(i + A[i]);
    }
    
    //sort them
    sort(lower_limit_vector.begin(), lower_limit_vector.end());
    sort(upper_limit_vector.begin(), upper_limit_vector.end());
    
    int upper_index = 0;
    int lower_index = 0;
    int intersect_num = 0;
    int total = 0;
    
    while (upper_index < N)
    {
        while(lower_index < N & lower_limit_vector[lower_index] <= upper_limit_vector[upper_index])
        {
            lower_index++;
            intersect_num++;
        }
        intersect_num--; //exclude itself intersects with itself
        total = total + intersect_num;
        if(total > 10000000)
            return -1;
        upper_index++;
    }
    
    return total;
}