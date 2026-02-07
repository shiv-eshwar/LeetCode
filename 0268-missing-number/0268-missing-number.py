class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n= len(nums)
        
        # x= 0
        # for i in range(0,n+1):
        #     x = x ^ i
        # y = 0
        # for i in range(0,n):
        #     y = y ^ nums[i]

        # return x^y  # here we are just doing the xor for 1-n and then for the xor for value and at last doing x ^ y gives the missing number
        ans =n
        for i in range(0,n):
            ans = ans ^ i
            ans ^= nums[i]
        
        return ans
