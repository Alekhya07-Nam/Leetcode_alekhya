class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int cnt=0;
        set<string> st(bannedWords.begin(), bannedWords.end());
        for(string i: message){
           if(st.find(i)!=st.end()) {cnt++;}
        }
        if(cnt>1) return 1;
        return 0;
    }
};