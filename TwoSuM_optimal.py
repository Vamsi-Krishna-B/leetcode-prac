
# This can be only used for like sayin Yes or No becosue we are not storing any index properly
from typing import List 
class Solution:
    def two_sum(self,nums: List[int], target: int) -> List[int]:
       sorted_nums = sorted(nums)
       l =0
       r =len(nums)-1
       while l <= r:
            if sorted_nums[l] + sorted_nums[r] == target:
                return [l,r]
            elif sorted_nums[l] + sorted_nums[r] < target:
                l+=1
            else:
                r-=1

           

               


sol = Solution()
print(sol.two_sum([2,7,11,15],9))
print(sol.two_sum([3,3],6))
print(sol.two_sum([3,2,4],7))