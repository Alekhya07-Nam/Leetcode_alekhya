class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        int n=strs.size(), m=strs[0].size();
        for(int i=0;i<m;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+=strs[j][i];
            }
            string ss=temp;
            sort(temp.begin(), temp.end());
            if(temp!=ss){
                cnt++;
            }
        }
        return cnt;
    }
};