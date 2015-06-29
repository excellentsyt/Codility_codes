vector<int> solution(vector<int> &A) {
    // write your code in C++11
    
    int size = A.size();
    vector<int> count(size*2+1, 0);
    vector<int> ret_vector;
    
    //Count the occurrences of each element in the array
    for(int i=0; i<size; i++)
    {
        count[A[i]]++;   
    }
    
    //Calculate the occurrences of divisors in the array
    for(int i=0; i<size; i++)
    {   
        int occur_num = 0;
        for(int j=1; j*j<=A[i]; j++)
        {
            if(A[i] % j == 0 && j*j != A[i])
            {
                occur_num += count[j];
                occur_num += count[A[i]/j];
            }
            else if (A[i] % j == 0 && j*j == A[i])
                 occur_num += count[j];
            else
                continue;
        }
        ret_vector.push_back(size-occur_num);
    }
    
    return ret_vector;
}