int climbStairsMemo(int n, int* memo) {
    if (n == 0 || n == 1)
        return 1;
    
    if (memo[n] != -1)
        return memo[n];
    
    memo[n] = climbStairsMemo(n - 1, memo) + climbStairsMemo(n - 2, memo);
    
    return memo[n];
}

int climbStairs(int n) {

    int* memo = (int*) malloc((n + 1) * sizeof(int));
    
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }
    
    int result = climbStairsMemo(n, memo);
    
    free(memo);
    
    return result;
}

