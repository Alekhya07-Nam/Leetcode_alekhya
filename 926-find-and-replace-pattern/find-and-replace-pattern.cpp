class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> vec;
        for(string i: words){
            unordered_map<char,char> mp1, mp2;
            int f=0;
            for(int j=0;j<i.size();j++){
                if(mp1.count(i[j]) and mp1[i[j]]!=pattern[j]) {
                    f=1;
                    break;
                    }
                if(mp2.count(pattern[j]) and mp2[pattern[j]]!=i[j]){
                    f=1;
                    break;
                } 
                mp1[i[j]]=pattern[j];
                mp2[pattern[j]]=i[j];
            }
            if(f==0){
                vec.push_back(i);
            }
        }
        return vec;
    }
};