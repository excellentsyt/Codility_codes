#include <stack>

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    
    stack<int> downstream;
    int size = A.size();
    int num = 0;
    
    for(int i=0; i<size; i++)
    {
        if(B[i] == 1)
            downstream.push(i);
        else if(B[i] == 0 && downstream.size() == 0)
            num++;
        else
        {
            while(true)
            {
                if(A[downstream.top()] > A[i])
                    break;
                else
                {
                    downstream.pop();
                    if(downstream.size() == 0)
                    {
                        num++;
                        break;
                    }
                }
            }
        }
    }
    
    return num + downstream.size();
}