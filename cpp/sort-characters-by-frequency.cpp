// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> om;
        
        for (auto& a: s) {
            ++om[a];
        }
        
        vector<pair<char,int>> m(om.begin(), om.end());
        
        sort(m.begin(), m.end(), [] (const pair<char,int>& a, const pair<char,int>& b) { return a.second > b.second;});
        
        string result = "";
        for(auto& a: m) {
            const char& c = a.first;
            const int& i = a.second;
            
            for (size_t j =0; j<i; ++j) {
                result += c;
            }
        }
        
        return result;
        
    }
};