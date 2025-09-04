class Solution {
public:
    vector<int> temp;
    Solution(int n, vector<int>& blacklist) {
        int i=0;
        n = min(100000, n);
        unordered_set<int> mpp(blacklist.begin(), blacklist.end());
        while(i<n){
            if(mpp.find(i)==mpp.end()){
                temp.push_back(i);
            }
            i++;
        }
    }
    
    int pick() {
        int s=temp.size();
        int val=rand()%s;
        return temp[val];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */