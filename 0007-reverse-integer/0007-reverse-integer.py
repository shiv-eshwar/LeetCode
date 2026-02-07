class Solution:
    def reverse(self, x: int) -> int:
        reversednum = 0
        sign = -1 if(x<0) else +1
        a = abs(x)
        while(a!=0):
            num = a%10
            reversednum = reversednum*10 + num
            a= a//10
        
        reversednum *= sign

        if (reversednum<(-1<<31) or reversednum>((1<<31))-1):
            return 0

        return reversednum 

