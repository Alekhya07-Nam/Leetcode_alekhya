class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0, j=0, m=0, cnt=0, temp;
        while(j<nums.size()){
           if(nums[j]==0){
            cnt++;
            if(cnt==1){
                temp=j;
                // j++;
            }
            else{
                m=max(m, j-i-1);
                i=temp+1;
                temp=j;
            }
           }
           j++;
        }
        m=max(m, j-i-1);
        return m;
    }
};