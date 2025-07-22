class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        position = 0
        for n in nums:
            if ( n!= 0):
                nums[position] = n
                position +=1
        
        for i in range(position,len(nums)):
            nums[i] =0
