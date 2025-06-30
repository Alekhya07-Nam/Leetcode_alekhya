class Solution {
public:
void guardDirection(int x, int y, int dx, int dy, int m, int n, vector<vector<int>>& matrix, int& unguardedCount) {
            while (x >= 0 && x < m && y >= 0 && y < n) {
                if (matrix[x][y] == -1 || matrix[x][y] == 1) break;
                if (matrix[x][y] == 0) {
                    matrix[x][y] = 2;
                    unguardedCount--;
                }
                x += dx;
                y += dy;
            }
        }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (const auto& wall : walls) {
            matrix[wall[0]][wall[1]] = -1;
        }
        for (const auto& guard : guards) {
            matrix[guard[0]][guard[1]] = 1;
        }

        int unguardedCount = m * n - walls.size() - guards.size();
        for (const auto& guard : guards) {
            int gx = guard[0], gy = guard[1];
            guardDirection(gx, gy + 1, 0, 1, m, n, matrix, unguardedCount);
            guardDirection(gx, gy - 1, 0, -1, m, n, matrix, unguardedCount);
            guardDirection(gx + 1, gy, 1, 0, m, n, matrix, unguardedCount);
            guardDirection(gx - 1, gy, -1, 0, m, n, matrix, unguardedCount);
        }

        return unguardedCount;
    }
};
