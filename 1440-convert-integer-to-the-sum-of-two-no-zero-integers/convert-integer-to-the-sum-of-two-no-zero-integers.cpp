class Solution {
public:
    bool yes(int n){
        while(n>0){
            int rem=n%10;
            if(rem==0){
                 return false;
            }
            n=n/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int j=n-i;
            if(yes(i) and yes(j)){
                return {i, j};
            }
        }
        return {};
    }
};