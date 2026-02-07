class Solution:
    def hammingWeight(self, n: int) -> int:
            count =0
            for i in range(0, 32):
                if (n & (1<<i))!=0:
                    count+=1
            return count  # here what we are doing is, first initiliz the counter and then we are looping up to 31 as totla 32 bits are there so we will check if n & (1<<i) !=0 then we are increasing the counter until the and operator does the zero
            