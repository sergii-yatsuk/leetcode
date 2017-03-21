// https://leetcode.com/problems/triangle/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        size_t sz= triangle.size();
        vector<int> prevLine(sz);
        vector<int> curLine(sz);
        
        prevLine[0] = triangle[0][0];
        
        for (size_t row = 1; row<sz; ++row) {
            curLine[0] = prevLine[0]+triangle[row][0];
            for (size_t col=1; col<row; ++col) {
                curLine[col] = triangle[row][col] + min(prevLine[col-1], prevLine[col]);
                }
            curLine[row] = prevLine[row-1]+triangle[row][row];    
            swap(prevLine, curLine);
        }
        
        int result=prevLine[0];
        
        for (const auto& a: prevLine) {
            result = min(result, a);
        }
        
        return result;

    }
};