class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        map<int, vector<long long>> mpp;
        vector<long long> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]].push_back(i);
        }
        for(auto i:mpp){
           vector<long long> vec=i.second;
           int n=vec.size();
           vector<long long> prefix(n+1);
           prefix[0]=0;
           for(long long i=0;i<n;i++){
            prefix[i+1]=prefix[i]+vec[i];
           }
            for(int i=0;i<n;i++){
                ans[vec[i]]=i*vec[i]-prefix[i]+prefix[n]-prefix[i+1]-(n-i-1)*vec[i];
            }
        }
        return ans;
    }
};