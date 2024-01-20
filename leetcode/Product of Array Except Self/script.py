class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        for i, num in enumerate(nums):
            result = 1 
            for x in nums:
                if nums[i] != x :
                    result *= x
            ans.append(result)
        return ans