int solution(vector<int> &A) {
    // write your code in C++11
    
    if(A.size() == 0)
        return 1;
    
    int size = A.size();
    int sum = 0;
    for (int i = 1; i <= size + 1; i++)
        sum += i;
        
    int missing = sum;
    for (int j = 0; j < size; j++)
    {
        missing -= A[j];
    }
    
    return missing;
}