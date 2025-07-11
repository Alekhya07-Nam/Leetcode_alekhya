class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int o=0, z=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                z++;
            }
            else{
                o++;
                o=min(z, o);
            }
        }
        return o;
    }
};