class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        sets = set()
        for i,num in enumerate(nums):
            if num in sets:
                sets.remove(num)
            else:
                sets.add(num)
        return sets.pop()