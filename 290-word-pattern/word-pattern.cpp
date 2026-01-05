class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char>mp2;
        vector<string> vec;
        stringstream ss(s);
        string word;
        while(ss>>word){
            vec.push_back(word);
        }
        if(vec.size()!=pattern.size()) return false;
        for(int i=0;i<pattern.size();i++){
            if(mp1.count(pattern[i]) and mp1[pattern[i]]!=vec[i]) return false;
            if(mp2.count(vec[i]) and mp2[vec[i]]!=pattern[i]) return false;
            mp1[pattern[i]]=vec[i];
            mp2[vec[i]]=pattern[i];
        }
        return true;
    }
};