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
        return 0;
        
////////////////////////////////// Above is check if this array has a leader or not //////////////////
// if it has, num is the number of leader in the array //////////////////////
    int total_pre = 0;
    int total_post = 0;
    int equi_num = 0;
    
    for(int i=0; i<size; i++)
    {
        if(A[i] == candidate)
        {
            total_pre++;
            total_post = num - total_pre;
        }
        if(total_pre > (i+1)/2 && total_post > (size-i-1)/2)
            equi_num++;
    }
    
    return equi_num;
}