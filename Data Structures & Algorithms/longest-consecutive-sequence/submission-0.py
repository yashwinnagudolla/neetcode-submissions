class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ans = 0
        map = {}
        for i in nums:
            map[i] = 1
        for i in nums:
            currLen = 1
            if i-1 in map:
                continue
            while i+1 in map:
                currLen += 1
                i += 1
            ans = max(currLen,ans)
        return ans


            

        