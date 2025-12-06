class Solution {
public:
    vector<int> helpFun(vector<string> queries){
         vector<int> query;
        for(int i=0;i<queries.size();i++){
            sort(queries[i].begin(), queries[i].end());
            int temp=count(queries[i].begin(), queries[i].end(), queries[i][0]);
            query.push_back(temp);
        }
        return query;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> query=helpFun(queries);
        vector<int> word=helpFun(words);
        sort(word.begin(), word.end());
        vector<int> ans;
        for(int i=0;i<query.size();i++){
        int val= upper_bound(word.begin(), word.end(), query[i])-word.begin();;
            ans.push_back(word.size()-val);
        }
        return ans;
    }
};