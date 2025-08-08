class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26, 0);
        int c=0, m=0, res=0;
        for(int i=0;i<s.size();i++){
            f[s[i]-'A']++;
            m=max(m, f[s[i]-'A']);
            while((i-c+1)-m>k){
                f[s[c]-'A']--;
                c++;
            }
            res=max(res, i-c+1);
        }
        return res;
    }
};