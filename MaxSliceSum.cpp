#define MAX(A,B) (A > B? A : B)

int solution(int A[], int N) {
    // write your code in C99
    
    int max_ending = 0;
    int max_slice = 0;
    if(N == 1)
        return A[0];
        
    int i = 0;
    for(i=0; i<N; i++)
    {
       max_ending = MAX(0, max_ending+A[i]); // max_ending is the max that ends at point i
       max_slice = MAX(max_slice, max_ending);
    }
    
    if(max_slice == 0)
    {
        max_slice = A[0];
        int j;
        for(j=1; j<N; j++)
        {
            max_slice = MAX(max_slice, A[j]);      
        }
    }
    
    return max_slice;    
}