class Solution {
public:
    void dfs(vector<vector<int>>& vec, vector<bool>& vis, int node){
        vis[node]=true;
        for(int i=0;i<vec[node].size();i++){
            if(!vis[vec[node][i]]){
                dfs(vec, vis, vec[node][i]);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1>connections.size()){
            return -1;
        }
        vector<vector<int>> vec(n, vector<int>{});
        for(int i=0;i<connections.size();i++){
            vec[connections[i][0]].push_back(connections[i][1]);
            vec[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> vis(n+1, false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(vec, vis, i);
            }
        }
        return cnt-1;
    }
};