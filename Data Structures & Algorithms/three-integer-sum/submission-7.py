class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[List[int]]:
        mp = {} 
        ans = []
        for i, x in enumerate(numbers):
            comp = target - x
            if comp in mp:
                ans.append([comp, x])
            mp[x] = i
        return ans
        

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        ans = []
        for i in range(n):
            currVal = nums[i]
            target = -1 * currVal
            arr= self.twoSum(nums[i+1:],target)
            if len(arr) > 0:
                for j in arr:
                    currArr = [nums[i]] + j
                    if currArr in ans:
                        continue
                    ans.append(currArr)
        return ans

        