class Solution {
public:
    vector<int>prefix;
    Solution(vector<int>& w) {
        prefix.push_back(w[0]);
        for(int i=1;i<w.size();i++){
            prefix.push_back(prefix[i-1]+w[i]);
        }
    }
    
    int pickIndex() {
        int val=rand()%(prefix[prefix.size()-1]);
        auto it=upper_bound(prefix.begin(), prefix.end(), val);
        return it-prefix.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */