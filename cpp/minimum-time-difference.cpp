// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<bool> day(2*24*60, 0);
        
        for (const auto& a: timePoints) {
            int minutes = 10*60*(a[0]-'0') + 60*(a[1]-'0')+10*(a[3]-'0')+(a[4]-'0');
            if (day[minutes]) return 0;
            day[minutes]=true;
            day[24*60+minutes]= true;
        }
        
        int minDiff = 2*24*60;
        
        int prev=0;
        int next=24*60;
        
        for (int i=0; i<24*60; ++i) {
            if (day[i]) {
                prev = i;
                break;
            }
        }
       
        for (int i=prev+1; i<2*24*60; ++i) {
            if (day[i]) {
                next = i;
                minDiff = min(minDiff, next-prev);
                prev = next;
            }
        }
        return minDiff;
    }
};