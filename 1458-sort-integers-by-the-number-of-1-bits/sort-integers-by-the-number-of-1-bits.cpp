class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multiset<pair<int,int>> st;
        for(int i:arr){
            int cnt=0;
            for(int j=0;j<15;j++){
                if((i>>j)&1) cnt++;
            }
            st.insert({cnt, i});
        }
        vector<int> ans;
        for(auto i:st){
            ans.push_back(i.second);
        }
        return ans;
    }
};