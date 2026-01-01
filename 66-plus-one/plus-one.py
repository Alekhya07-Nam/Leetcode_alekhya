class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        for i in digits:
            s=s+str(i)
        s=int(s)
        s=s+1
        s=str(s)
        l=[]
        for i in range(0,len(s)):
            l.append(int(s[i]))
        return l