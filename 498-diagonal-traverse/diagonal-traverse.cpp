class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<vector<int>> vec(mat.size()+mat[0].size()-1);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                vec[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> res;
        for(int i=0;i<vec.size();i++){
            if(i%2==0){
            reverse(vec[i].begin(), vec[i].end());
            }
            for(int j=0;j<vec[i].size();j++){
                res.push_back(vec[i][j]);
            }
        }
        return res;
    }
};