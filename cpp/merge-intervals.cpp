// https://leetcode.com/problems/merge-intervals/

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
    vector<Interval> merge(vector<Interval>& intervals) {
        if (intervals.size()<2) return intervals;
        std::sort(intervals.begin(), intervals.end(), [](Interval& i1, Interval& i2){ return i1.start < i2.start;});
        vector<Interval> result;
        
        int start = intervals[0].start;
        int stop = intervals[0].end;
        for (size_t i=1; i<intervals.size();++i) {
            if (intervals[i].start > stop) {
                result.push_back(Interval(start, stop));
                start = intervals[i].start;
                stop = intervals[i].end;
            }
            else {
                stop = max(intervals[i].end, stop);
            }
        }
        result.push_back(Interval(start, stop));
        return result;
    }
};