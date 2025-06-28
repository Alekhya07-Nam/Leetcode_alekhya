class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       vector<pair<int,int>> vec;
       for(int i=0;i<nums.size();i++){
        vec.push_back({nums[i],i});
       } 
       sort(vec.begin(), vec.end());
        vector<int> res(nums.size(),INT_MAX);
        for(int i=vec.size()-k;i<vec.size();i++){
            res[vec[i].second]=vec[i].first;
        }
        vector<int> ans;
        for(int i=0;i<res.size();i++){
            if(res[i]!=INT_MAX){
                ans.push_back(res[i]);
            }
        }
        return ans;
    }
};