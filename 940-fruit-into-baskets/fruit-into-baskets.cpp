class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0, sum=0, m=0;
        unordered_map<int,int> mpp;
        while(j<fruits.size()){
            mpp[fruits[j]]++;
            sum++;
            while(mpp.size()>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0){
                    mpp.erase(fruits[i]);
                }
                i++;
                sum--;
            }
            m=max(m, sum);
            j++;
        }
        return m;
    }
};