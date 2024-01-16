def groupAnagrams(strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        anagram_group = {}

        for word in strs:
                sorted_word = ''.join(sorted(word))
                if sorted_word in anagram_group:
                    anagram_group[sorted_word].append(word)
                else:
                    anagram_group[sorted_word] = [word]
        return list(anagram_group.values())

strs = ["eat","tea","tan","ate","nat","bat"]

print(groupAnagrams(strs))