class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            int x=points[i][0], y=points[i][1];
            int xx=points[i+1][0], yy=points[i+1][1];
            ans+= max(abs(xx-x), abs(yy-y));       
            }
            return ans;
    }
};