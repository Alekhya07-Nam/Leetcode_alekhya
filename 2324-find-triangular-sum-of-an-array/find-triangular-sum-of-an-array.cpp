class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> vec=nums;
        while(vec.size()!=1){
            vector<int> temp;
            for(int i=1;i<vec.size();i++){
                temp.push_back((vec[i-1]+vec[i])%10);
            }
            vec=temp;
        }
        return vec[0];
    }
};