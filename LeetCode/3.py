class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        res = 0
        dict = {}

        i = 0

        for index, alphabet in enumerate(s):
            if alphabet in dict and dict[alphabet] + 1 > i:
                i = dict[alphabet] + 1

            if index - i + 1 > res:
                res = index - i + 1
            
            dict[alphabet] = index
        
        return res
