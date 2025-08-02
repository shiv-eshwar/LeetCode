class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        n = len(nums)
        count = 0
        prefix =0
        freq = defaultdict(int)
        freq[0] =1
        for x in nums:
            prefix+=x
            rem = prefix % k
            count += freq[rem]
            freq[rem] += 1
        return count