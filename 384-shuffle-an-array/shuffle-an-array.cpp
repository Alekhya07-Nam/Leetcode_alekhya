class Solution {
public:
    vector<int> temp;
    Solution(vector<int>& nums) {
        for(int i: nums){
            temp.push_back(i);
        }
    } 
    
    vector<int> reset() {
        return temp;
    }
    vector<int> shuffle() {
        vector<int> v=temp;
       random_shuffle(v.begin(), v.end());
       return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */