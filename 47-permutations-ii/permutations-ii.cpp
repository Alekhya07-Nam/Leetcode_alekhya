class Solution {
public:
    void solve(vector<int>nums,int start,int end,set<vector<int>>&st){
        if(start>=end){
            st.insert(nums);
            return ;
        }
        for(int i=start;i<=end;i++){
            swap(nums[start],nums[i]);
            solve(nums,start+1,end,st);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> st;
        solve(nums,0,nums.size()-1,st);
        vector<vector<int>> vec(st.begin(), st.end());
        return vec;
    }
};