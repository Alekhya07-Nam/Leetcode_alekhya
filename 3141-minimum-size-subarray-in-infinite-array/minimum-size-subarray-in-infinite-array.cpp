class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long t=0;
        for(int i: nums){
            t+=i;
        }
        long long a=target/t;
        long long rem=target%t;
        if(rem==0) return a*nums.size();

        vector<int> vec=nums;
        for(int i: nums){
            vec.push_back(i);
        }
        int l=0, ans=INT_MAX, sum=0;
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
            while(sum>rem){
                sum-=vec[l];
                l++;
            }
            if(sum==rem){
                ans=min(ans, i-l+1);
            }
        }
        if(ans!=INT_MAX) return ans+a*nums.size();
        return -1;
    }
};