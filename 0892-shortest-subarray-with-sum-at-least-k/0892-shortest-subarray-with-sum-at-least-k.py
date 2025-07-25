class Solution:
    def shortestSubarray(self, nums: List[int], k: int) -> int:
        n = len(nums)
        # sentinel for “no answer yet”
        ans = n+1

        # 1) build prefix sums P[0..n]
        P = [0]*(n+1)
        for i in range(n):
            P[i+1] = P[i] + nums[i]

        # 2) a “deque” of start‐indices, by list + head pointer
        dq = []     # will hold candidate start‐indices j
        head = 0    # first valid index in dq is dq[head]

        # 3) sweep i from 0..n
        for i in range(n+1):
            # 3a) pop from front while we have P[i] - P[dq[head]] >= k
            while head < len(dq) and P[i] - P[dq[head]] >= k:
                ans = min(ans, i - dq[head])
                head += 1

            # 3b) maintain P[ dq[*] ] in strictly increasing order:
            #     if P[i] <= P[dq[-1]], then dq[-1] is never as good as i
            while head < len(dq) and P[i] <= P[dq[-1]]:
                dq.pop()

            # 3c) append i as a future window start
            dq.append(i)

        return ans if ans <= n else -1