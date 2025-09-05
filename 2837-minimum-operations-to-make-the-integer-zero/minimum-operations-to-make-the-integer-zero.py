class Solution:
    def makeTheIntegerZero(self, num1: int, num2: int) -> int:
        for i in range(1, 61):
            val=num1-(i*num2)
            if(val<=0):
                break
            n=bin(val).count('1')
            if(n<=i<=val):
                return i
        return -1