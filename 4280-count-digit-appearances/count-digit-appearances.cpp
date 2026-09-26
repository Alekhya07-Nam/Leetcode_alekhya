class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]){
                int rem=nums[i]%10;
                if(rem==digit){
                    cnt++;
                }
                nums[i]/=10;
            }
        }
        return cnt;
    }
};