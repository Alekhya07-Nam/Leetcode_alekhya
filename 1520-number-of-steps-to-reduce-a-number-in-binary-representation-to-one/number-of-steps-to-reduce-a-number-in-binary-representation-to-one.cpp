class Solution {
public:
    int numSteps(string s) {
        int len=s.size();
        int c1=0, c=0;
        for(int i=len-1;i>0;i--){
            int curr=s[i]-'0'+c;
            if(curr&1){
                c=1;
                c1+=2;
            }
            else{
                ++c1;
            }
        }
        return c+c1;
    }
};