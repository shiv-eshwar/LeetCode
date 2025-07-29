class Solution:
    def mySqrt(self, x: int) -> int:

         #def binarysearch(self,x):
        left = 0
        right = x
            
        while(left<=right):
            mid = left+ (right-left)//2
            if (mid**2==x):
                return mid
            elif (mid**2 < x):
                left=mid+1
            else:
                right= mid-1
        return right

        