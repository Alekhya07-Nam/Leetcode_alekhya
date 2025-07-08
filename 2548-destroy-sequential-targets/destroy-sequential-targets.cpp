class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        map<int,int> mpp;
        int m=INT_MIN, ans=INT_MAX;
        for(int i:nums){
            int rem = i%space;
            mpp[rem]++;
            m=max(m, mpp[rem]);
        }
        for(int i: nums){
            if(m==mpp[i%space]){
                ans=min(ans, i);
            }
        }
        return ans;
    }
};