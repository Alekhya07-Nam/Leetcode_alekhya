class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ma=0;
        for(int i=0;i<nums.size();i++){
            if(i>ma){
                return false;
            }
            ma=max(ma, nums[i]+i);
        }
        return true;
    }
};