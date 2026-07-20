from typing import List 
class Solution:
    def two_sum(self,nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            value = target - nums[i]
            for j in range(i+1,len(nums)):
                if nums[j] == value:
                    return [i,j]

sol = Solution()
print(sol.two_sum([2,7,11,15],9))
print(sol.two_sum([3,3],6))
print(sol.two_sum([3,2,4],6))