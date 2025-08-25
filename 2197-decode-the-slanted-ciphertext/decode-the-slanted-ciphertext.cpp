class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n=encodedText.size();
        int cols=n/rows;
        vector<vector<char>> vec(rows, vector<char>(cols, ' '));
       int k = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                vec[i][j] = encodedText[k++];
            }
        }
        vector<string> res(cols);
        for(int j=0;j<cols;j++){
            for(int i=0;i<rows;i++){
                if(i+j<cols){
                res[j].push_back(vec[i][i+j]);
                }
            }
        }
        string ans="";
        for(int i=0;i<res.size();i++){
            ans+=res[i];
        }
        while(!ans.empty() and ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};