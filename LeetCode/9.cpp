class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        return x == reverse(x);
    }

private:
    long long reverse(long long x) {
        long long res = 0;
        while (x) {
            int digit = x % 10;
            res = res * 10 + digit;
            x = x / 10;
        }

        return res;
    }
};