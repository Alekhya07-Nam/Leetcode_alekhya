class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        st.push(nums[0]);
        int i=1;
        while(i<nums.size()){
            if(st.top()<=nums[i]){
                st.push(nums[i]);
            }
            i++;
        }
        return st.size();
    }
};