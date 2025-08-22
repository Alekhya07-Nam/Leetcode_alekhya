class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int ri=INT_MIN, rj=INT_MIN , ci=INT_MAX, cj=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ri=max(ri, i);
                    ci=min(ci, i);
                    rj=max(rj, j);
                    cj=min(cj, j);
                }
            }
        }
        int a=ri-ci, b=rj-cj;
        cout<<ri<<" "<<ci<<" "<<rj<<" "<<cj<<endl;
        cout<<a<<" "<<b;
        return (a+1)*(b+1);
    }
};