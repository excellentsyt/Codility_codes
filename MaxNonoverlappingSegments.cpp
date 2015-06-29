int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    
    int N = A.size();
    if(N <= 1)
        return N;
        
    int head = 0;
    int tail = 1;
    int count = 1;
        
    while(tail < N)
    {
        if(A[tail] <= B[head])
            tail++;
        else
        {
            count++;
            head = tail;
            tail++;
        }
    }
    
    return count;
}