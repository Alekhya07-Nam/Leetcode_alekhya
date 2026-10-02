class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ans1(n+1, 0);
        vector<int> ans2(n+1, 0);
        for(int i=0;i<trust.size();i++){
            ans1[trust[i][0]]+=1;
            ans2[trust[i][1]]+=1;
            // cout<<ans1[i]<<" "<<ans2[i]<<endl;
        }
        for(int i=1;i<=n;i++){
            if(ans1[i]==0 and ans2[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};