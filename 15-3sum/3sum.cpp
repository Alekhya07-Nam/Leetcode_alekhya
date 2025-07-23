class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        vector<vector<int>> vec;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int left=i+1, right=n-1;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    vec.push_back({nums[i], nums[left], nums[right]});
                
                while(left<right and nums[left]==nums[left+1]){
                    left++;
                }
                while(left<right and nums[right]==nums[right-1]){
                    right--;
                }
                left++;
                right--;
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return vec;
    }
};