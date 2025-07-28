class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int> mpp;
        for(int i=0;i<responses.size();i++){
            set<string> st;
            for(int j=0;j<responses[i].size();j++){
               st.insert(responses[i][j]);
            }
            for(string s:st){
                mpp[s]++;
            }
        }
        int m=0;
        string res;
        for(auto i:mpp){
            if(m<i.second){
                res=i.first;
                m=i.second;
            }
        }
        return res;
    }
};