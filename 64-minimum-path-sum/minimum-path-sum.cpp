class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<long long>> temp(n, vector<long long> (m ,-1));
        long long  left=0;
        for(int i=0;i<m;i++){
            left+=grid[0][i];
            temp[0][i]=left;
        }
        left=0;
        for(int i=0;i<n;i++){
            left+=grid[i][0];
            temp[i][0]=left;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                temp[i][j]=grid[i][j]+min(temp[i][j-1],temp[i-1][j]);
            }
        }
        return temp[n-1][m-1];
    }
};