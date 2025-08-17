class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        unordered_map<int, vector<int>> mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &i:mpp){
            sort(i.second.rbegin(), i.second.rend());
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mat[i][j] = mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }
          return mat;
    }
};