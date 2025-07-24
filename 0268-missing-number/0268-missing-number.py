class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n= len(nums)
        exp_sum = n*(n+1)//2 # this is tyhe formula for the sum of n natuiral number 
        act_sum = sum(nums)
        return (exp_sum -act_sum)

        ()