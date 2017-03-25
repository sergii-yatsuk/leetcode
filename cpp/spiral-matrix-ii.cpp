// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l=0;
        int r=n;
        vector<vector<int>> result(n, vector<int>(n));
        
        int k=1;
        
        while (l<n) {
            for(int i=l; i<r; ++i) {
                result[l][i] = k++;
            }
            
            for(int i=l+1; i<r; ++i) {
                result[i][r-1] = k++;
            }
            
            for(int i=r-2; i>=l; --i) {
                result[r-1][i] = k++;
            }
            
            for(int i=r-2; i>l; --i) {
                result[i][l] = k++;
            }
            ++l;
            --r;
        }
        
        return result;
    }
};