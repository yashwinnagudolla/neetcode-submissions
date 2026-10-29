class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums) - 1
        if n == 0:
            return nums
        forward = [1] * (n+1) 
        reverse = [1] * (n+1)
        forward[0] = nums[0]
        reverse[n] = nums[n]
        for i in range(1,len(nums)):
            forward[i] *= nums[i] * forward[i-1]
            reverse[n-i] *= nums[n-i] * reverse[n-i+1]
        ans = [1] * (n+1)
        for i in range(len(nums)):
            if(i == 0):
                ans[i] = reverse[i+1]
            elif(i == n):
                ans[i] = forward[i-1]
            else:
                ans[i] = forward[i-1] * reverse[i+1]
        return ans
            


        