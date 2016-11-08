//https://leetcode.com/problems/shuffle-an-array/
#include <vector>
#include <ctime>

using namespace std;

class Solution {
public:
    Solution(vector<int> nums) {
        srand ( time(nullptr) );
        vec = nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return vec;
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        if (vec.empty()) return vec;
        vector<int> result = vec;
        
        for(auto i = vec.size()-1; i>0; --i) {
            auto j = rand() % (i+1);
            swap(result[i], result[j]);
        }
        
        return result;
        
    }
private:
    vector<int> vec;
};