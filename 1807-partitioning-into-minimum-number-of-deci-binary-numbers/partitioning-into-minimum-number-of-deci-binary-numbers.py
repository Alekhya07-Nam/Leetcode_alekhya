class Solution:
    def minPartitions(self, n: str) -> int:
        l=[]
        for i in n:
            l.append(int(i))
        return max(l)
        

        