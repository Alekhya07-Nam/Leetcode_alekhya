class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string ss="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                vec.push_back(ss);
                ss="";
            }
            else{
                ss+=s[i];
            }
        }
        if(ss!=" "){
            vec.push_back(ss);
        }
        ss="";
        for(auto i:vec){
            reverse(i.begin(), i.end());
            ss+=i+" ";
        }
        ss.pop_back();
        return ss;
    }
};