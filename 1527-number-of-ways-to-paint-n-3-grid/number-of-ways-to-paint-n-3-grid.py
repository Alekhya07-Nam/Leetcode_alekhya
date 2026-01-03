class Solution:
    def numOfWays(self, n: int) -> int:
        m=10**9+7
        a,b=6,6
        for i in range(1,n):
            a,b=(3*a+2*b)%m, (2*a+2*b)%m
        return (a+b)%m