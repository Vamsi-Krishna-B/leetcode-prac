from typing import List 
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        hash_map = {0:1}
        count = 0 
        prefixSum = 0
        for n in nums:
            prefixSum+=n 
            if prefixSum - k in hash_map:
                count+=hash_map[prefixSum-k]
            hash_map[prefixSum] = hash_map.get(prefixSum, 0) + 1
        return count


sol = Solution()
print(sol.subarraySum([1,2,3],k=3))
print(sol.subarraySum([1,1,1],k=2))