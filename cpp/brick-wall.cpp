// https://leetcode.com/problems/brick-wall/
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        vector<vector<int>> wall2;
        wall2.reserve(wall.size());
        
        int maxSz=0;
        
        for(const auto& a : wall[0]) {
            maxSz+=a;
        }
        
        unordered_map<int,int> m;
        
        for (size_t row=0; row<wall.size(); ++row) {
            size_t rowSz = wall[row].size();
            int prev = wall[row][0];
            ++m[prev];
            for (size_t col=1; col<rowSz; ++col) {
                prev+=wall[row][col];
                ++m[prev];
            }
        }
        
        pair<int,int> maxEl;
        maxEl = make_pair(0, 0);

        for (const auto& a: m) {
            if (a.first != maxSz && a.second>maxEl.second) {
                maxEl=a;
            }            
        }
        
        return wall.size()-maxEl.second;
    }
};
