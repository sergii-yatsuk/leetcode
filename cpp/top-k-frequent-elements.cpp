// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        if (k>nums.size()) return vector<int>();

        unordered_map<int, int>  map;

        for (const auto& a: nums) {
            ++map[a];
        }

        vector<pair<int,int>> arr;

        for (const auto&a: map) {
            arr.push_back(a);
        }

        partial_sort(arr.begin(), arr.begin()+k, arr.end(),
        [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });

        vector<int> result(k);

        for (size_t i=0; i<k; ++i) {
            result[i] = arr[i].first;
        }




        return result;
    }
};