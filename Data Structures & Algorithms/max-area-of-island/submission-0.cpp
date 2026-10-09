class Solution {
public:
    int solve(int i, int j, int n, int m,
              vector<vector<int>>& grid,
              vector<vector<int>>& vis) {
        vis[i][j] = 1;
        int area = 1;

        int dr[] = {1, 0, -1, 0};
        int dc[] = {0, -1, 0, 1};

        for(int k = 0; k < 4; k++) {
            int r = i + dr[k], c = j + dc[k];

            if(r < n && c < m && r >= 0 && c >= 0 &&
               grid[r][c] == 1 && !vis[r][c]) {
                area += solve(r, c, n, m, grid, vis);
            }
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int maxarea = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    int a = solve(i, j, n, m, grid, vis);
                    maxarea = max(a, maxarea);
                }
            }
        }

        return maxarea;
    }
};
