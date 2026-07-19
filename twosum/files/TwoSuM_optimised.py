from typing import List 
class Solution:
    def two_sum(self,nums: List[int], target: int) -> List[int]:
       hash_map = {}
       for i,num in enumerate(nums):
            if target-num in hash_map:
               return [i,hash_map[target-num]]
            else:
               hash_map[num] = i


sol = Solution()
print(sol.two_sum([2,7,11,15],9))
print(sol.two_sum([3,3],6))
print(sol.two_sum([3,2,4],6))