int solution(int K, vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    int sum = 0;
    int count = 0;
    
    for(int i=0; i<N; i++)
    {
        sum += A[i];
        if(sum >= K)
        {
            count++;
            sum = 0;
        }
    }
    
    return count;
}