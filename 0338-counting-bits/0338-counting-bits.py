class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = []

        # def countnumones(nums: int) -> int:
        #     count = 0
        #     while (nums): # here what i did is initilize the ans as empty list and then def the countnum of ones fun as it count how many ones are there in each loop, then i right shift the bit and set it as i am shrinking the bits to count num of ones in that iteration, and at last appending it to the ans list
        #         if nums & 1:
        #             count = count + 1
                
        #         nums >>=1
        #     return count
            
                
        # for i in range(n + 1):
        #    b= countnumones(i)

        #    ans.append(b)

        def numofsetbit(nums:int)-> int:
            count =0
            for i in range(32):
                if(nums & (1<<i))> 0:
                    count=count+1
            
            return count
        for i in range(n+1):
            ans.append(numofsetbit(i))
        
        return ans
