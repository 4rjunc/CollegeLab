class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = list()
        for x in nums:
            if x in seen:
                return True
            else:
                seen.append(x)
        return False
