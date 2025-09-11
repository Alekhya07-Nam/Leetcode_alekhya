class Solution:
    def sortVowels(self, s: str) -> str:
        l=['a','e','i','o','u','A','E','I','O','U']
        ll=[]
        for i in s:
            if i in l:
                ll.append(i)
        ll.sort()
        ll=ll[::-1]
        t=""
        for i in s:
            if i in l:
                t+=ll[-1]
                ll.pop()
            else:
                t+=i
        return t
        