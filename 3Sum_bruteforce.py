from typing import List
class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        n = len(nums)
        res_arr = set()
        for i in range(n):
            for j in range(i+1,n):
                for k in range(j+1,n):
                    if nums[i] + nums[j] + nums[k] == 0:
                       res_arr.add(tuple(sorted([nums[i],nums[j],nums[k]])))
        return [list(res) for res in res_arr]



sol = Solution()
print(sol.threeSum([-1,0,1,2,-1,-4]))
print(sol.threeSum([0,0,0]))
print(sol.threeSum([0,1,1]))