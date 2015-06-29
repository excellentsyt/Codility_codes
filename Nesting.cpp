int solution(string &S) {
    // write your code in C++11
    
    int size = S.size();
    if(size % 2 != 0)
        return 0;
    
    int leftSize = 0;
    int rightSize = 0;
    for(int i = 0; i < size; i++)
    {
        if(S[i] == '(')
            leftSize++;
        else if(S[i] == ')')
            rightSize++;
        else
            return 0;
            
        if(leftSize < rightSize)
            return 0;   
    }
    
    if(leftSize == rightSize)
        return 1;
    else
        return 0;
}