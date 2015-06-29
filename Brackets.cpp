#include <stack>

int solution(string &S) {
    // write your code in C++11
    
    int size = S.size();
    
    if(size == 0)
        return 1;
    if(size % 2 != 0)
        return 0;
        
    stack<int> stk;
    
    for(int i=0; i<size; i++)
    {
        if(S[i] == '{' || S[i] == '[' || S[i] == '(')
            stk.push(S[i]);
        else if(stk.size() > 0)
        {
            if((S[i] == '}' && stk.top() == '{') || (S[i] == ']' && stk.top() == '[') || (S[i] == ')' && stk.top() == '('))
                stk.pop();
            else
                return 0;
        }
        else
            return 0;
    }
    
    if(stk.size() != 0)
        return 0;
    
    return 1;
}