int solution(int N) {
    // write your code in C99
    
    int result = 0;
    int i = 1;
    
    while(i*i < N)
    {
        if(N % i == 0)
        {
            result += 2;   
        }
        
        i++;
    }
    
    if(i*i == N)
        result += 1;
        
    return result;
}