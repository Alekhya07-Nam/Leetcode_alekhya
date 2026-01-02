class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int n=nums.size();
        for(auto i:mpp){
            if(i.second==n/2){
                return i.first;
            }
        }
        return -1;
    }
};