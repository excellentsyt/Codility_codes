#include <stack>

int solution(vector<int> &H) {
    // write your code in C++11
    
    int size = H.size();
    stack<int> stk;
    
    stk.push(H[0]);
    int total = 1;
    
    for(int i=1; i<size; i++)
    {
        while(true)
        {
            if(stk.size() == 0)
            {
                stk.push(H[i]);
                total++;
                break;
            }
            else
            {
                if(H[i] > stk.top())
                {
                    stk.push(H[i]);
                    total++;
                    break;
                }
                else if(H[i] < stk.top())
                {
                    stk.pop();
                }
                else //H[i] == stk.top()
                    break;
            }
        }
    }
    
    return total;
}