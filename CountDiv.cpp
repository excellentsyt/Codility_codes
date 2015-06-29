int solution(int A, int B, int K) {
    // write your code in C++11
    
    int numA = A / K;
    int numB = B / K;
    
    int num = numB - numA;
    
    if(A % K == 0)
        return num +1;
    else
        return num;
}