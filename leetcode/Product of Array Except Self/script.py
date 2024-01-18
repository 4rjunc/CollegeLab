class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        answer = []
        ans = 1
        for i in range(len(nums)):
            for num in nums : 
                if nums[i] != num:
                    ans = ans * num
            answer.append(ans)
            ans = 1
        return answer