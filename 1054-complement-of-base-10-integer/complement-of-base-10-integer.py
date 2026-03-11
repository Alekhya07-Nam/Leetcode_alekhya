class Solution:
    def bitwiseComplement(self, n: int) -> int:
        s=str(bin(n)).replace("0b","")
        ss=""
        for i in s:
            if(i=="1"):
                ss+="0"
            else:
                ss+="1"
        return int(ss,2)

        