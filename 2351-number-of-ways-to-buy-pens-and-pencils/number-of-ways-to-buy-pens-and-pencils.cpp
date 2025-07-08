class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long  pens = total/cost1;
        long long cnt=0;
        // cout<<pens;
        if(total<cost1 and total<cost2){
            return 1;
        }
        while(pens>=0){
            long long r=total-(pens)*cost1;
            // cout<<r<<" ";
            long long pr=r/cost2;
            cnt+=pr+1;
            pens--;
        }
        return cnt;
    }
};