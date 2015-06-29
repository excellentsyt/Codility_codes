#include <vector>

int solution(vector<int> &A) {
    // write your code in C++11
    if(A.size() == 1)
    {
        if(A[0] == 1)
            return 1;
        else 
            return 0;
    }
    
    int *tmp = new int[A.size()];
    for (int i = 0; i < A.size(); i++)
        tmp[i] = 1;
        
    int checkingSize = A.size();
    for (int j = 0; j < A.size(); j++)
    {
        if(A[j] > A.size())
            return 0;
        else if(tmp[A[j] - 1] == 1)
        {
            tmp[A[j] - 1] = 0;
            checkingSize--;
            if(checkingSize == 0)
                return 1;
        }
    }
    
    delete tmp;
    return 0;
}