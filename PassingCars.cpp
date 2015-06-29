int solution(vector<int> &A) {
    // write your code in C++11
    
    int sum = 0;
    int pairNum = 0;
    for(int i=0; i <A.size(); i++)
        sum += A[i];
        
    for(int j=0; j <A.size(); j++)
    {
        if(A[j] == 1)
            sum--;
        else
        {
            pairNum = pairNum + sum;
            if(pairNum > 1000000000)
                return -1;
        }
    }
    
    return pairNum;
}