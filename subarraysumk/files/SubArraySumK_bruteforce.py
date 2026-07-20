from typing import List 
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        count = 0
        for i in range(n):
            summ = 0 
            for j in range(i,n):
                summ+=nums[j]
                if summ==k:
                    count+=1
        return count


sol = Solution()
print(sol.subarraySum([1,2,3],k=3))
print(sol.subarraySum([1,1,1],k=2))