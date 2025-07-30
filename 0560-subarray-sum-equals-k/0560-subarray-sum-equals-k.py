class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        p = 0
        count =0
        freq = {0:1}
        for num in nums:
            p+= num

            if p -k in freq:
                count+=freq[p-k]
            freq[p]=freq.get(p,0)+1
        return count