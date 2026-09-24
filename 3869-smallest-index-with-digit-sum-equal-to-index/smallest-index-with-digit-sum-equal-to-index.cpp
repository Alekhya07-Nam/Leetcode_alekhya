class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int s=0, temp=nums[i];
            while(nums[i]){
                int r=nums[i]%10;
                s+=r;
                nums[i]=nums[i]/10;
            }
            if(i==s){
                return i;
            }
        }
        return -1;
    }
};