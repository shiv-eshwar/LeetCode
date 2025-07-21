class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        start = 0
        end = 1

        while end < len(nums):
            if nums[start] == nums[end]:
                return True
            
            start +=1 
            end +=1

        return False