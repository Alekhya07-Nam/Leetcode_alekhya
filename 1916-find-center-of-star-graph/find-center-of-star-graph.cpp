class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> mpp;
        for(int i=0;i<edges.size();i++){
            mpp[edges[i][0]]++;
            mpp[edges[i][1]]++;
        }
        int val, m=INT_MIN;
        for(auto i:mpp){
            if(m<i.second){
                 m=i.second;
                 val=i.first;
            }
        }
        return val;
    }
};