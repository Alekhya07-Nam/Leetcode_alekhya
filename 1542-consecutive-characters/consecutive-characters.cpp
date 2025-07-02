class Solution {
public:
    int maxPower(string s) {
        int cnt=1, m=1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                cnt++;
            }
            else{
                m=max(m, cnt);
                cnt=1;
            }
        }
        m=max(m, cnt);
        return m;
    }
};