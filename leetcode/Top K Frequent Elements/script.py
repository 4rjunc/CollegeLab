class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        num_counts = {}
        for num in nums:
            num_counts[num] = num_counts.get(num, 0) + 1

        # Sort the numbers based on their frequencies in descending order
        sorted_nums = sorted(num_counts.keys(), key=lambda x: num_counts[x], reverse=True)

        # Return the first k elements from the sorted list
        return sorted_nums[:k]