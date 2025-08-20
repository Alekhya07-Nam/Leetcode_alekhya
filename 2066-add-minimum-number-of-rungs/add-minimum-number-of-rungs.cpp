class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int cnt=0;
        if(rungs[0]>dist){
            cnt+=((rungs[0]-1)/dist);
        }
        for(int i=1;i<rungs.size();i++){
            int diff=rungs[i]-rungs[i-1];
            if(diff>dist){
                cnt+=((diff-1)/dist);
            }
        }
        return cnt;
    }
};