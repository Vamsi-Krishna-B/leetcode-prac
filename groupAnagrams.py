from collections import defaultdict
from typing import List
class Solution:
    def group_anagrams(self, strs: List[str]) -> List[List[str]]:
        hash_map = defaultdict(list)
        for st in strs:
            key = "".join(sorted(st))
            hash_map[key].append(st)
        return list(hash_map.values())
sol = Solution()
print(sol.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))

