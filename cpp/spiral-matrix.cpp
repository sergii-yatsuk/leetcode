// https://leetcode.com/problems/spiral-matrix/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.size()==0 || matrix[0].size()==0) return result;
        
        if (matrix.size()==1) {
            
            for (auto& a: matrix[0]) {
                result.push_back(a);
            }
            
            return result;
        }
        
        if (matrix[0].size()==1) {
            
            for (int i =0; i<matrix.size();++i) {
                result.push_back(matrix[i][0]);
            }
            
            
            return result;
        }
        
        int left = 0;
        int right = matrix[0].size();
        int top = 0;
        int bottom = matrix.size();
        
        while (left<right && top<bottom)
        {
            // go left
        int col = left;
        int row = top;
        for (; col< right; ++col) {
            result.push_back(matrix[row][col]);
        }
        ++top;
        
        if (top == bottom) break;
        
        // go down
        col = right -1;
        row = top;
        for (; row<bottom; ++row){
            result.push_back(matrix[row][col]);
        }
        --right;
        
        if (left == right) break;
        
        // go left
        col = right-1;
        row = bottom-1;
        for (;col>=left; --col) {
            result.push_back(matrix[row][col]);
        }
        --bottom;
        if (top == bottom) break;
        
        
        // go up
        col = left;
        row = bottom-1;
        for (; row>=top; --row) {
            result.push_back(matrix[row][col]);
        }
        
        ++left;
        if (left == right) break;

    }
    
        // now 
        
        return result;
    }
};