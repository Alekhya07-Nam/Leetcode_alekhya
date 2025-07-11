class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> ans;
        map<int, int> mpp;
        int n=score.size(), m=score[0].size();
        for(int i=0;i<n;i++){
            mpp[score[i][k]]=i;
        }
        for(auto i:mpp){
            ans.push_back(score[i.second]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};