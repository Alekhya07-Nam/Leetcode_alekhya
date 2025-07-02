class Solution {
public:
    int m, n;
    vector<vector<char>> grid;
    vector<vector<bool>> visited;

    int numIslands(vector<vector<char>>& inputGrid) {
        grid = inputGrid;
        m = grid.size();
        if (m == 0) return 0;
        n = grid[0].size();
        visited = vector<vector<bool>>(m, vector<bool>(n, false));

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    dfs(i, j);
                    count++;
                }
            }
        }
        return count;
    }

    void dfs(int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1' || visited[i][j]) {
            return;
        }
        visited[i][j] = true;
        dfs(i + 1, j);
        dfs(i - 1, j);
        dfs(i, j + 1);
        dfs(i, j - 1);
    }
};
