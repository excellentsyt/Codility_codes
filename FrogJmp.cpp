int solution(int X, int Y, int D) {
    // write your code in C99
    if (X == Y)
        return 0;
        
    int steps = (Y - X) / D;
    if ((Y - X) % D == 0)
        return steps;
    else
        return steps +1;
}