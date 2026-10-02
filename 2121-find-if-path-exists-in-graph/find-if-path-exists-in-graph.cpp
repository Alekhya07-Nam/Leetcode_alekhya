class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<int> vis(n, false);
        q.push(source);
        while(!q.empty()){
            vis[q.front()]=true;
            int temp=q.front();
            q.pop();
            if(temp==destination){
                return true;
            }
            for(int i=0;i<adj[temp].size();i++){
                if(vis[adj[temp][i]]==false){
                vis[adj[temp][i]]=true;
                q.push(adj[temp][i]);
                }
            }
        }
        return false;
    }
};