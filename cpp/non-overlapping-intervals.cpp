// https://leetcode.com/problems/non-overlapping-intervals

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        if (intervals.size()<2) return 0;
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return b.end != a.end ? b.end > a.end : b.start > a.start;;});
        
        int result = 0;
        int prevEnd = intervals[0].end;
        for (size_t i=1; i<intervals.size(); ++i) {
            if (intervals[i].start<prevEnd) {
                ++result;
            }
            else {
                prevEnd = intervals[i].end;
            }
        }
    
        return result;
    }
};
