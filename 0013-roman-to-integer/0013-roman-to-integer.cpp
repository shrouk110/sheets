class Solution {
public:
    int romanToInt(string s) {
        char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int value[]  = {  1 ,  5 , 10 , 50 ,100 ,500 ,1000 };
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = 0;
            int next = 0;
            for (int j = 0; j < 7; j++) {
                if (s[i] == roman[j]) {
                    current = value[j];
                    break;
                }
            }
            if (i + 1 < s.length()) {
                for (int j = 0; j < 7; j++) {
                    if (s[i + 1] == roman[j]) {
                        next = value[j];
                        break;
                    }
                }
            }

            if (current < next)
                total -= current;
            else
                total += current;
        }

        return total;
    }
};
