class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int digits[10];
        int n = 0;

        for (int temp = x; temp > 0; temp /= 10) {
            digits[n++] = temp % 10;
        }

        for (int i = 0; i < n / 2; i++) {
            if (digits[i] != digits[n - 1 - i])
                return false;
        }

        return true;
    }
};
