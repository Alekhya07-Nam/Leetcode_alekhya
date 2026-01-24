class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        m=0
        i=0
        j=len(nums)-1
        while(i<j):
            n=max(m,(nums[i]+nums[j]))
            m=n
            j=j-1
            i=i+1
        return m
        