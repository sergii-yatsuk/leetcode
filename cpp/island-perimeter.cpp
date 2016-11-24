// https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0;
        for (int i=0; i<grid.size(); ++i) {
            for (int j=0; j<grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    if (i==0) ++result;
                    else if (grid[i-1][j]==0) ++result;
                    if (j==0) ++result;
                    else if (grid[i][j-1]==0) ++result;
                    if (i==grid.size()-1) ++result;
                    else if (grid[i+1][j]==0) ++result;
                    if (j==grid[i].size()-1) ++result;
                    else if (grid[i][j+1]==0) ++result;
                }
                
            }
        }
        
        return result;
    }
    
    
};	