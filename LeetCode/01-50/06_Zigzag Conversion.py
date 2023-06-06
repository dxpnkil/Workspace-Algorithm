class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s

        a = ['']*numRows
        k = index = 0

        for letter in s:
            a[k%numRows] += letter

            if k == numRows-1:
                index = 1
            if k == 0:
                index = 0
            k = k+1 if index == 0 else k-1

        result = a[0]
        for i in a[1:]:
            result += i
        return result
