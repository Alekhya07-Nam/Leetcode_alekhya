class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> vec;
        string s="";
        for(int i=0;i<text.size();i++){
            if(text[i]!=' '){
                s+=text[i];
            }
            else{
                vec.push_back(s);
                s="";
            }
        }
        if(!s.empty()) vec.push_back(s);
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            int flag=0;
            for(int j=0;j<vec[i].size();j++){
                int res=brokenLetters.find(vec[i][j]);
                if (res != string::npos){
                    flag=1;
                }
            }
            if(flag==0){
                cnt++;
            }
        }
        return cnt;
    }
};