class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        m=max(nums)
        cnt=0
        c=0
        for i in range(0,len(nums)):
            if(nums[i]==m):
                cnt+=1
                print(cnt)
            else:
                c=max(c,cnt)
                # print(c)
                cnt=0
        return max(c,cnt)
            
        