class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> vec1(26,0);
        vector<int> res;
        for(char i: p){
            vec1[i-'a']++;
        }
        vector<int> vec2(26,0);
        for(int i=0;i<s.size();i++){
            vec2[s[i]-'a']++;
            if(i>=p.size()){
                vec2[s[i-p.size()]-'a']--;
            }
            if(vec1==vec2){
                res.push_back(i-p.size()+1);
            }
        }
        return res;
    }
};