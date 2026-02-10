class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        lis=[]
        nums.sort()
        for i in range(0,2**len(nums)):
            j=len(nums)-1
            l=[]
            while(i!=0):
                if(i&1==1):
                    l.append(nums[j])
                i=i>>1
                j=j-1
            if l  not in lis:
                 lis.append(l)
        return lis
        