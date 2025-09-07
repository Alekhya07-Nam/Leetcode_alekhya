class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec;
        bool flag=false;
        if(n%2!=0){
            n=n-1;
            flag=true;
        }
        int i=1;
        while(n>0){
            vec.push_back(i);
            vec.push_back(-1*i);
            i++;
            n=n-2;
        }
        if(flag){
            vec.push_back(0);
        }
        return vec;
    }
};