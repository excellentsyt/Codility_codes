vector<int> solution(int N, vector<int> &A) {
    // write your code in C++11
    vector<int> counters;
    for(int i=0; i < N; i++)
        counters.push_back(0);
        
    int max = 0;
    bool topFlag = false;
    int topperValue = 0;
    
    int size = A.size();
    for(int j=0; j < size; j++)
    {
        if(A[j] <= N && A[j] >=1)
        {
            if(topFlag && (counters[A[j]-1] >= topperValue))
            {
                counters[A[j]-1]++;
                if(counters[A[j]-1] > max)
                     max = counters[A[j]-1];
            }
            else if (topFlag && (counters[A[j]-1] < topperValue))
            {
                counters[A[j]-1] = topperValue + 1;
                if(counters[A[j]-1] > max)
                     max = counters[A[j]-1];
            }
            else if (!topFlag)
            {
                counters[A[j]-1]++;
                if(counters[A[j]-1] > max)
                    max = counters[A[j]-1];
            }
        }
        else if((A[j] == N + 1))
        {
            topFlag = true;    
            topperValue = max;   
        }
    }
    
    for(int k=0; k < N; k++)
    {
        if(counters[k] < topperValue)
            counters[k] = topperValue;
    }
    
    return counters;
}