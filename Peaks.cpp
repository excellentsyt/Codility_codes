typedef int bool;
#define true 1
#define false 0

int solution(int A[], int N) {
    // write your code in C99
    
    //find all peaks
    int *peak = (int*)malloc(sizeof(int)*N);
    int i = 0;
    int p = 0;
    int max_num_blocks=0;
    for(i=1; i <N-1; i++)
    {
        if(A[i] > A[i-1] && A[i] > A[i+1])
        {
            peak[p] = i;
            p++;
        }
    }
    
    if(p == 0)
        return 0;
    else
    {
        peak[p] = 0;
        max_num_blocks = 1;
    }
    
    //Traverse all the divisors that we can try to test if each has peak in it
    int index = 2;
    while(index*index <= N)
    {
        int larger_factor = 0;
        if(N % index == 0)
            larger_factor = N / index;
        else
        {
            index++;
            continue;
        }
        //find whether peak exists in the division
        int j;
        bool found = true;
        p = 0;
        for(j = 0; j < N; j = j+index)
        {
            //p = 0;
            bool split_found = false;
            while(peak[p] != 0)
            {
                if(peak[p] <= j+index-1 && peak[p] >=j)
                {
                    split_found = true;
                    break;
                }
                else
                    p++;
            }
            if(!split_found)
            {
                found = false;
                break;
            }
        }
        if(found == true)
            return larger_factor;
            
        //try the other way
        found = true;
        p = 0;
        for(j = 0; j < N; j = j+larger_factor)
        {
            //p = 0;
            bool split_found = false;
            while(peak[p] != 0)
            {
                if(peak[p] <= j+larger_factor-1 && peak[p] >=j)
                {
                    split_found = true;
                    break;
                }
                else
                   p++;
            }
            if(!split_found)
            {
                found = false;
                break;
            }
        }
        if(found == true && index > max_num_blocks)
            max_num_blocks = index;
            
        index++;
    }
    
    return max_num_blocks;
}