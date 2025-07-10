class Solution {
public:
    int hIndex(vector<int>& citations) {
        int cnt=0;
       sort(citations.rbegin(), citations.rend());
       for(int i=0;i<citations.size();i++){
            if(i<citations[i]){
                cnt++;
            }
       } 
       return cnt;
    }
};