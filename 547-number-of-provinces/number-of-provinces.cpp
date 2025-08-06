class Solution {
public:
    void dfs(vector<vector<int>> &vec, vector<bool>& vis, int node){
        vis[node]=true;
        for(int i=0;i<vec[node].size();i++){
            if(!vis[vec[node][i]]){
               dfs(vec,vis, vec[node][i]);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> vec(isConnected.size(), vector<int> {});
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1 and i!=j){
                vec[i].push_back(j);
                }
            }
        }
        int n=isConnected.size();
        vector<bool> vis(n+1, false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(vec, vis, i);
            }
        }
        return cnt;
    }
};




