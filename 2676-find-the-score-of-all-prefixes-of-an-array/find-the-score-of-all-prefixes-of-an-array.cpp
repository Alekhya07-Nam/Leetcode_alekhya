class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> pref;
        long long m=nums[0];
        for(int i=0;i<nums.size();i++){
            if(m<nums[i]){
                m=nums[i];
            }
            pref.push_back(nums[i]+m);
        }
        vector<long long> ans;
        long long s=0;
        for(long long i:pref){
            s+=i;
            ans.push_back(s);
        }
        return ans;
    }
};