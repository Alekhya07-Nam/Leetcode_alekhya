class Solution:
    def maximum69Number (self, num: int) -> int:
        num=str(num)
        l=list(num)
        for i in range(0,len(l)):
            if(l[i]=="6"):
                l[i]="9"
                break
        nums=""
        for i in l:
            nums+=i
        return int(nums)
        