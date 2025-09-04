class Solution {
public:
    unordered_map<int, vector<int>> mpp;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        vector<int> temp=mpp[target];
        int s=temp.size();
        int val=rand()%s;
        return temp[val];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */