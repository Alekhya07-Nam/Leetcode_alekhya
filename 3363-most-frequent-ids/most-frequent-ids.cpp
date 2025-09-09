class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        priority_queue<pair<long long, int>> pq;
        unordered_map<int, long long> mpp;
        vector<long long> vec;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=freq[i];
            pq.push({mpp[nums[i]], nums[i]});
            while(!pq.empty()){
                pair<long long, int>p=pq.top();
                if(mpp[p.second]!=p.first){
                    pq.pop();
                }
                else{
                    break;
                }
            }
        vec.push_back(pq.top().first);
        }
        return vec;
    }
};