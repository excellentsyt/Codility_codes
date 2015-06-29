int gcd(int N, int M)
{
    if(N % M == 0)
        return M;
    else
        gcd(M, N % M);
}
    
int solution(int N, int M) {
    // write your code in C99
    
    //First calculate the gcd of (N,M)
    int gcd_num = gcd(N, M);
    
    //Calculate the lcm of (N,M)
    long lcm_num = ((long)N * (long)M) / gcd_num;
    
    return lcm_num / M;
}