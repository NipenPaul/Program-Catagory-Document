class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        lst = []
        dq = deque()
        for i in range(k):
            while dq and nums[i] >= nums[dq[-1]]:
                dq.pop()
            dq.append(i)
        lst.append(nums[dq[0]])
        for i in range(k, len(nums)):
            if dq and dq[0] == i-k:
                dq.popleft()
            while dq and nums[i] >= nums[dq[-1]]:
                dq.pop()
            dq.append(i)
            lst.append(nums[dq[0]])
        return lst
