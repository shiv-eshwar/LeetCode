class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        nums.sort()
        def Binary(nums,target):
            left, right = 0, len(nums)-1
            while (left<= right):
                mid = left + (right-left)//2

                if (nums[mid] == target):
                    return True
                elif (nums[mid]<= target):
                    left = mid +1
                else:
                    right = mid -1
            return False
        
        n=len(nums)
        res =[]
        for i in range(1,n+1):
            if not Binary(nums,i):
                res.append(i)
        return res