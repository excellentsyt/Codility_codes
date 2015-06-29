int solution(vector<int> &A) {
    // write your code in C++11
    
    int N = A.size();
    double min = (A[0] + A[1]) / 2.0;
    int index = 0;
    
    if(N == 2)
        return 0;
        

    // Two elements
    for(int i=0; i < N - 1; i++)
    {
        if((A[i] + A[i+1])/2.0 < min)
        {
            min = (A[i] + A[i+1])/2.0;
            index = i;
        }
    }
    
    // Three elements
    for(int j=0; j < N - 2; j++)
    {
        if((A[j] + A[j+1] + A[j+2])/3.0 < min)
        {
            min = (A[j] + A[j+1] + A[j+2])/3.0;
            index = j;
        }
    }
    
    return index;
}