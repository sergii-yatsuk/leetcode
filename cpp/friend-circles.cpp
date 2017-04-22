// https://leetcode.com/problems/friend-circles

class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int result = 0;
        set<int> used;;
        queue<int> currentCircle;
        int sz = M.size();
        for (int j = 0; j<sz; ++j) {
        //while (!all.empty()) {
            if (used.count(j)==1) continue;
            currentCircle.push(j);
            int cur;
            while (!currentCircle.empty()) {
                cur = currentCircle.front();
                currentCircle.pop();
                for (int i = 0; i<sz; ++i ) {
                    if(j!= i && used.count(i)==0 && M[cur][i] == 1) {
                        currentCircle.push(i);
                        used.insert(i);
                    }
                }
            }
            ++result;
        }
        return result;
    }
};
