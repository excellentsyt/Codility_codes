int solution(int M, vector<int> &A) {
    // write your code in C++11
    
    vector<int> array_M(M+1, -1);
    int N = A.size();
    int distinct_num = 0;
    int front = 0;
    
    for(int i=0; i < N; i++)
    {
        while(front < N && array_M[A[front]] == -1)
        {
            array_M[A[front]] = front;
            distinct_num += front - i + 1;
            if(distinct_num>1000000000) return 1000000000;
            front++;
        }
        if(front == N) break;
        if(front < N && array_M[A[front]] != -1)
        {
            //Reset array_M
            int newi = array_M[A[front]];
            while(i < newi)
            {
                array_M[A[i]] = -1;
                i++;
            }
            array_M[A[front]] = -1;
        }
    }
    
    return distinct_num;
}