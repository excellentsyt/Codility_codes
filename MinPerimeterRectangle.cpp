int solution(int N) {
    // write your code in C99
    
    int min_peri = 2*(N+1);
    int i = 2;
     
    while(i*i <=N)
    {
        if(N%i == 0)
        {
            if(min_peri > 2*(i + N / i))
                min_peri = 2*(i + N / i);
        }
        i++;
    }
    
    return min_peri;
}
