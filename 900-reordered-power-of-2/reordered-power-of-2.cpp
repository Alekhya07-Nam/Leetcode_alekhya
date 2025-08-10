class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(), s.end());
        for(int i=0;i<31;i++){
            int p=1<<i;
            string po=to_string(p);
            sort(po.begin(), po.end());
            if(s==po){
                return true;
            }
        }
        return false;
    }
};