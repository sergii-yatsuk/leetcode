// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int i = 0;
        int j = n-1;
        
        int curMax = (j-i)*min(height[i], height[j]);
        int m=0;
        
        while (i<j) {
            m = (j-i)*min(height[i], height[j]);
            if (m>curMax) curMax = m;
            
            if (height[i] < height[j]) ++i;
            else --j;
            
        }
     
        return curMax;
    }
};