class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int m=INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=0;i<=nums.size()-k;i++){
            m=min(m, nums[i+k-1]-nums[i]);
        }
        return m;
    }
};