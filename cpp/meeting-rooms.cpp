// https://leetcode.com/problems/meeting-rooms/

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
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.size() < 2) return true;
        sort(intervals.begin(), intervals.end(), [](Interval& a, Interval& b) { return a.start < b.start;});
        for (int i=0; i<intervals.size()-1; ++i) {
            if (intervals[i+1].start < intervals[i].end) return false;
        }
        return true;
    }
};