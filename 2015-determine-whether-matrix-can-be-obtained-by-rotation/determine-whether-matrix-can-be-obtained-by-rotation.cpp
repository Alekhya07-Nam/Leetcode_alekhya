class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       int k=0;
       if(mat==target){
        return 1;
       }
       while(k<4){
        int n=mat.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
       }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        // cout<<n<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"hi"<<endl;
        if(mat==target){
            return 1;
        }
       k+=1;
       }
       return 0;
    }
};