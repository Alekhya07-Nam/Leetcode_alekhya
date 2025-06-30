class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> vec(nums.size(), 1);
        int m=1e9+7;
        for(int i=1;i<nums.size();i++){
            vec[i]=(2*vec[i-1])%m;
        }
        int i=0, j= nums.size()-1, ans=0;
        while(i<=j){
           if((nums[i]+nums[j])<=target){
            ans=(ans+vec[j-i])%m;
            i++;
           } 
           else{
            j--;
           }
        }
        return ans;
    }
};