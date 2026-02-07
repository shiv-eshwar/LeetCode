class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n= len(nums)
        
        x= 0
        for i in range(0,n+1):
            x = x ^ i
        y = 0
        for i in range(0,n):
            y = y ^ nums[i]

        return x^y
