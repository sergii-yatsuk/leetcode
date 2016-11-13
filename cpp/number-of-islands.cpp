class Solution {
public:
   int numIslands(vector<vector<char>>& grid) {
      if (grid.empty()) return 0;
      vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size()));

      for (size_t i = 0; i < grid.size(); ++i) {
         for (size_t j = 0; j < grid[i].size(); ++j) {
            visited[i][j] = false;
         }
      }

      int count = 0;
      for (size_t i = 0; i < grid.size(); ++i) {
         for (size_t j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == '1' && visited[i][j] == false) {
               ++count;
               visitIsland(i, j, visited, grid);
            }
         }
      }

      return count;
   }

private:
   void visitIsland(int i, int j, vector<vector<bool>>& visited, vector<vector<char>>& grid) {
      if (i < 0 || j < 0) return;
      if (i >= grid.size() || j >= grid[0].size()) return;
      if (visited[i][j]) return;
      if (grid[i][j] == '0') return;
      visited[i][j] = true;
      visitIsland(i - 1, j, visited, grid);
      visitIsland(i + 1, j, visited, grid);
      visitIsland(i, j - 1, visited, grid);
      visitIsland(i, j + 1, visited, grid);
      return;
   }
};