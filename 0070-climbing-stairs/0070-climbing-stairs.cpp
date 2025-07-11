class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int first = 1;  
        int second = 2;
        int total;

        for (int i = 3; i <= n; i++) {
            total = first + second; // ways to reach step i
            first = second;
            second = total;
        }

        return second;
    }
};
