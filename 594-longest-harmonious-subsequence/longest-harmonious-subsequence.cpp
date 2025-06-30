class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mpp;
        int m=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for (int i=0;i<nums.size();i++){
            if(mpp[nums[i]+1]>0){
                m=max(m, mpp[nums[i]]+mpp[nums[i]+1]);
            }
        }
        return m;
    }
};