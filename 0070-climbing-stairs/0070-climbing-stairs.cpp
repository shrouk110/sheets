class Solution {
public:
    int s[46] = {0}; 
    int climbStairs(int n) {
        if (n == 0 || n == 1)
            return 1;

        if (s[n] != 0)
            return s[n];  
        s[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return s[n];
    }
};
