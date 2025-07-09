class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        unordered_set<int> row, col;
        long long sum = 0;

        for(int i = queries.size() - 1; i >= 0; i--) {
            int type = queries[i][0];
            int index = queries[i][1];
            int val = queries[i][2];

            if(type == 0 && row.find(index) == row.end()) {
                sum += 1LL * (n - col.size()) * val;
                row.insert(index);
            }
            else if(type == 1 && col.find(index) == col.end()) {
                sum += 1LL * (n - row.size()) * val;
                col.insert(index);
            }
        }

        return sum;
    }
};
