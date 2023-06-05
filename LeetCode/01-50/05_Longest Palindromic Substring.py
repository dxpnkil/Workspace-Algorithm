class Solution:
    def find(self, s, l, r) -> str:
        while l >= 0 and r < len(s) and s[l] == s[r]:
            l -= 1; r += 1
        return s[l+1:r]

    def longestPalindrome(self, s: str) -> str:
        res = ""
        for i in range(len(s)):
            p1 = self.find(s, i, i+1)
            p2 = self.find(s, i, i)
            res = max([res, p1, p2], key=len)
        return res
