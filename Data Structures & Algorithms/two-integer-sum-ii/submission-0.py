class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n = len(numbers) -1
        i = 0
        j = n
        while i < j:
            sum = numbers[i] + numbers[j]
            if sum == target:
                return [i+1,j+1]
            elif sum > target:
                j -= 1
            else:
                i += 1
        return []
        