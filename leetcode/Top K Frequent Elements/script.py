class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        elements = []
        for x in nums:
            if countOf(nums, x) >= k:
                if x not in elements:
                    elements.append(x)

        return elements