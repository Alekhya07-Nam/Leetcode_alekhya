class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            int a=arr[i+1]-arr[i];
            if(a<mini){
                mini=a;
            }
        }
        vector<vector<int>> vec;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==mini){
                vec.push_back({arr[i], arr[i+1]});
            }
        }
        return vec;
    }
};