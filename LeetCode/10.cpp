class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));

        dp[0][0] = 1;
        for (int j = 1; j < m + 1; j++) {
            if (p[j - 1] == '*')
                dp[0][j] = dp[0][j - 2];
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2];
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                        dp[i][j] |= dp[i - 1][j];
                    }
                }
            }
        }
        return dp[n][m];
    }
};