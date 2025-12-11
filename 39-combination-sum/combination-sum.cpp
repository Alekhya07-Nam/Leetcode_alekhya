class Solution {
public:
    void akhi(vector<int>&num,int index,vector<vector<int>>& ans,int target,int size,int mysum, vector<int>&a){
        if(index>=size and mysum!=target){
            return ;
        }
        else if(mysum==target){
            ans.push_back(a);
            return ;
        }
        else if(mysum>target){
            return ;
        }
        a.push_back(num[index]);
        akhi(num,index,ans,target,size,mysum+num[index],a);
        a.pop_back();
        akhi(num,index+1,ans,target,size,mysum,a);
    }
    vector<vector<int>> combinationSum(vector<int> num, int target) {
        sort(num.begin(),num.end());
       vector<vector<int>> ans;
       vector<int>a;
       akhi(num,0,ans,target,num.size(),0,a);
       return ans;
    }
};