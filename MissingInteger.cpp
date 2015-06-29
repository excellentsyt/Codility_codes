int solution(vector<int> &A) {
    // write your code in C++11
    
    int size = A.size();
    if(size == 1 && A[0] == 1)
        return 2;
    
    int *tmp = new int[size];
    for (int i = 0; i < size; i++)
        tmp[i] = 1;
         
    for (int j = 0; j < size; j++)
    {       
        if((A[j] <= size) && (A[j] > 0) && tmp[A[j]-1] == 1)
            tmp[A[j]-1] = 0;
    }
    
    int k=0;
    for (k = 0; k < size; k++)
    {
        if(tmp[k] == 1)
        {
            free(tmp);
            break;
        }
    }
    
    return k + 1;   
}