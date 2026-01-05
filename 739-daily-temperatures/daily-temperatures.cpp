class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int> st;
        vector<int> res;
        for(int i=nums.size()-1;i>=0;i--){
            if(!st.empty() and nums[st.top()]>nums[i]){
                res.push_back(st.top()-i);
            }
            else{
                while(!st.empty() and nums[st.top()]<=nums[i]){
                    st.pop();
                }
                if(!st.empty()) res.push_back(st.top()-i);
                else res.push_back(0);
            }
            st.push(i);
        }
    reverse(res.begin(), res.end());
    return res;
    }
};