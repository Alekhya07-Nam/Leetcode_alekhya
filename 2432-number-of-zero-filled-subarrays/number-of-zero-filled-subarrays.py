class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        s=0
        c=0
        for i in range(0,len(nums)+1):
            if(i<len(nums) and nums[i]==0):
                c=c+1
            elif(c!=0):
                s=s+(c*(c+1)//2)
                c=0
        return s

        