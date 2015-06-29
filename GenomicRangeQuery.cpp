vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++11
    
    vector<int> ret;
    int M = P.size();
    int N = S.size();
    
    int **map = new int*[3];
    for(int i = 0; i < 3; i++)
        map[i] = new int[N+1];
    
    map[0][0] = 0;
    map[1][0] = 0;
    map[2][0] = 0;
        
    for(int j = 0; j < N; j++)
    {
        if(S[j] == 'A')
            map[0][j+1] = map[0][j] + 1;
        else
             map[0][j+1] = map[0][j];
             
        if(S[j] == 'C')
            map[1][j+1] = map[1][j] + 1;
        else
            map[1][j+1] = map[1][j];
             
        if(S[j] == 'G')
            map[2][j+1] = map[2][j] + 1;
        else
            map[2][j+1] = map[2][j];              
    
    }
    
    for(int k=0; k < M; k++)
    {
        if (map[0][Q[k] + 1] - map[0][P[k]] > 0)
            ret.push_back(1);
        else if (map[1][Q[k] +1] - map[1][P[k]] > 0)
            ret.push_back(2);
        else if (map[2][Q[k] +1] - map[2][P[k]] > 0)
            ret.push_back(3);
        else 
            ret.push_back(4);
    }
    
     for(int i = 0; i < 3; i++)
        delete []map[i];
    delete []map;
    
    return ret;
}