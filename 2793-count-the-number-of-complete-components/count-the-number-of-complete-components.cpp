class Solution {
public:
    bool bfs(vector<vector<int>>& adj, vector<bool>& vis, int source){
        queue<int> q;
        q.push(source);
        vis[source] = true;

        int vertices = 0;
        int edges = 0;

        while(!q.empty()){
            int temp = q.front();
            q.pop();

            vertices++;
            edges += adj[temp].size();

            for(int i=0;i<adj[temp].size();i++){
                if(vis[adj[temp][i]] == false){
                    vis[adj[temp][i]] = true;
                    q.push(adj[temp][i]);
                }
            }
        }

        edges = edges / 2;

        if(edges == vertices * (vertices - 1) / 2){
            return true;
        }

        return false;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n, false);
        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int cnt = 0;

        for(int i=0;i<n;i++){
            if(vis[i] == false){
                if(bfs(adj, vis, i) == true){
                    cnt++;
                }
            }
        }

        return cnt;
    }
};