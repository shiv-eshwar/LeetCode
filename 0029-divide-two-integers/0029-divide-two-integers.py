class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        INT_MIN= -2 **31
        INT_MAX= 2**31-1

        if (dividend == INT_MIN and divisor ==-1):
            return INT_MAX

        ispositive = ((dividend>0 and divisor > 0) or (dividend < 0 and divisor < 0))

        a= abs(dividend)
        b= abs(divisor)

        if (a==b):
            return 1 if ispositive else -1

        quotient = 0

        while(a>= b):
            i =0
            while((b<<i) <= a):
                i+=1
            quotient += (1<<(i-1))
            a -= (b<<(i-1))

        return quotient if ispositive else -quotient


            
