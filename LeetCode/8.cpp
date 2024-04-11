class Solution {
public:
    int myAtoi(string s) {
        int res = 0, i = 0;
        const int MAX_LIMIT = INT_MAX / 10;
        char ch;

        // if whitespaces then ignore.
        while (s[i] == ' ') {
            ++i;
        }
    
        // sign of number
        bool isNegative = (ch=s[i]) == '-';
        if (isNegative || ch == '+') {
            ++i;
        }


        // checking for digit
        while (isDigit(ch = s[i])) {
            int digit = ch - '0';
            if (res > MAX_LIMIT
                || (res == MAX_LIMIT && digit > 7)) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            res = res * 10 + digit;
            ++i;
        }
        return isNegative ? -res : res;
    }

    private:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }
};