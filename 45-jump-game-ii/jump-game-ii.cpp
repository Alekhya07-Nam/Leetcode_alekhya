class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0, curFar=0, curEnd=0;
        for(int i=0;i<nums.size()-1;i++){
            curFar=max(curFar, i+nums[i]);
            if(curEnd==i){
                jump++;
                curEnd=curFar;
            }
        }
        return jump;
    }
};