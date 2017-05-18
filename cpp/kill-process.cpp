// https://leetcode.com/problems/kill-process

class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        map<int, vector<int>> m;
        vector<int> result;
        queue<int> q;
        
        for (size_t i=0; i<ppid.size(); ++i) {
            m[ppid[i]].push_back(pid[i]);
        }
        
        q.push(kill);
        
        while(!q.empty()) {
            auto p = q.front();
            result.push_back(p);
            q.pop();
            
            for (const auto a : m[p]) {
                q.push(a);
            }
        }

        return result;
    }
};
