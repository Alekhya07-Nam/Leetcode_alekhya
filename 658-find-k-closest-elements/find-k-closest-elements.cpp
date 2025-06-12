class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        sort(arr.begin(), arr.end(), [x](int a,int b){
            int a1=abs(x-a);
            int b1=abs(x-b);
            if(a1==b1){
                return a<b;
            }
            return a1<b1;
        });
        // for(auto i: arr){
        //     cout<<i<<" ";
        // }
        vector<int> ans;
        for(auto i: arr){
            if(k>0){
                ans.push_back(i);
                k--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};