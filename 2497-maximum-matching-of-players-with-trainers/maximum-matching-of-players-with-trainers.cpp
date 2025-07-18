
#include <cmath>
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        int cnt=0;
        int n=players.size();
        int m=trainers.size();
        int i=0;
        int j=0;
        while(i<n and j<m){
            if(players[i]<=trainers[j]){
                i+=1;
                j+=1;
                cnt+=1;
            }
            else{
                j+=1;
            }
        }
        return cnt;
    }
};