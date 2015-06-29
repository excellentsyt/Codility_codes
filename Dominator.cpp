
int solution(vector<int> &A) {
    // write your code in C++11
    
    int size = A.size();
    
    int candidate = 0;
    int count = 0;
    
    for(int i=0; i<size; i++)
    {
        if(count == 0)
        {
            candidate = A[i];
            count++;
        }
        else
        {
            if(candidate == A[i])
                count++;   
            else
                count--;
        }
    }
    
    int num = 0;
    //find out if candidate is the leader or not
    for(int i=0; i<size; i++)
    {
        if(candidate == A[i])
            num++;
    }
    if(num <= size / 2)
        return -1;
        
    for(int i=0; i<size; i++)
    {
        if(candidate == A[i])
            return i;
    }
}