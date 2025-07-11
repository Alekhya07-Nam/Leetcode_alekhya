class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int s=0, cnt=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(mpp.find(s-k)!=mpp.end()){
                cnt+=mpp[s-k];
            }
            mpp[s]++;
        }
        return cnt;
    }
};