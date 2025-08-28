class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int, vector<int>> diag;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                diag[i - j].push_back(grid[i][j]);
            }
        }
        for(auto &i: diag){
            if(i.first>=0){
                sort(i.second.rbegin(), i.second.rend());
            }
            else{
                sort(i.second.begin(), i.second.end());
            }
        }
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=i-j;
                grid[i][j]=diag[x][mpp[x]++];
            }
        }
        return grid;
    }
};
