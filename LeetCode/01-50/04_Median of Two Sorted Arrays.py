class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l1, l2 = len(nums1), len(nums2)
        mid = (l1 + l2) // 2 + 1

        i = j = 0
        cur = prev = 0 
        
        for _ in range(mid):
            prev = cur

            if j == l2 or (i != l1 and nums1[i] <= nums2[j]): 
                cur = nums1[i]
                i += 1
            else:
                cur = nums2[j]
                j += 1
                
        if (l1 + l2) % 2:
            return float(cur)
        else:
            return (cur + prev) / 2
