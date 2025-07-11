class Solution {
public:
    bool isValid(string s) {
        stack<char> mem;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch =='('||ch =='{' ||ch == '[') {
                mem.push(ch);
            } else {
                if (mem.empty()) 
                return false;

                char top = mem.top();
                mem.pop();

                if ((ch ==')' && top !='(') ||
                    (ch =='}' && top !='{') ||
                    (ch ==']' && top != '[')) {
                    return false;
                }
            }
        }

        return mem.empty();
    }
};
