class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        result = []
        for i in range(n):
            for j in range(i+1,n):
                if (nums[i] + nums[j]== target):
                    return (i,j)
        return (i,j)
