class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []

        subset =[]

        def backtracking(i:int,num:List[int]):
            if (i>= len(nums)):
                res.append(subset.copy())
                return
            # here we include the nums[i]
            subset.append(nums[i])
            backtracking(i+1,num)

            #here we donot include

            subset.pop()
            backtracking(i+1,num)

        backtracking(0,nums)
        return res