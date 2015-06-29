#define false 0
#define true 1

int gcd(int N, int M)
{
    if(N % M == 0)
        return M;
    else
        gcd(M, N % M);
}

int hasSamePrimeDivisor(int N, int M)
{
    int gcd_orig = gcd(N, M);
    int gcd_n, gcd_m;
    // Deal with N
    gcd_n = gcd(N,gcd_orig);
    while(gcd_n != 1)
    {
        N = N / gcd_n;
        gcd_n = gcd(N,gcd_orig);
    }
    
    if(N != 1)
        return false;
        
    // Deal with M
    gcd_m = gcd(M,gcd_orig);
    while(gcd_m != 1)
    {
        M = M / gcd_m;
        gcd_m = gcd(M,gcd_orig);
    }
    
    if(M != 1)
        return false;
        
    return true;
}


int solution(int A[], int B[], int Z) {
    // write your code in C99
    int i;
    int result = 0;
    
    for(i=0; i<Z; i++)
    {
        if(hasSamePrimeDivisor(A[i], B[i]))
            result++;
    }
    
    return result;
}