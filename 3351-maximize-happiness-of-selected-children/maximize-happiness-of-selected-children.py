class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        c=0
        m=0
        happiness.sort()
        for i in range(0,k):
            a=happiness[len(happiness)-1]
            if((a-m)>=0):
                c=c+a-m
            m=m+1
            happiness.pop()
        return c
            