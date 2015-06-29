int solution(int X, int A[], int N) {
    // write your code in C99
    
    if (X == 1)
        return 0;
        
    int *tmp = (int*)malloc(sizeof(int)*X);
    int counter = 0;
    while(counter < X)
    {
        tmp[counter] = 1;
        counter++;
    }
    
    int sizeTmp = X;
    
    for(int i = 0; i < N; i++)
    {
        if(tmp[A[i]-1] == 1)
        {
            sizeTmp--;
            tmp[A[i]-1] = 0;
            if(sizeTmp == 0)
                return i;
        }
    }
    
    free(tmp);
    return -1;
}