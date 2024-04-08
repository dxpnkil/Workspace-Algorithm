class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x) {
            if (res > INT_MAX / 10 || res < INT_MIN / 10) {
                return 0;
            }

            int tmp = x % 10;
            res = res * 10 + tmp;
            x = x / 10;
        }

        return res;
    }
};

/*
    Solution:
    Check if the answer outside the range in each iteration
    Extract the last digit of interger x repeatedly using modulo (x%10)
    The answer is built by multiplying the current answer by 10 and adding the above extracted digit. 
    The input integer is updated by dividing by 10 in each iteration.
*/