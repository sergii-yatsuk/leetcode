// https://leetcode.com/problems/max-points-on-a-line/

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        if (points.size()<3) return points.size();
        int result=2;
        
        for (size_t i=0; i<points.size(); ++i) {
            for (size_t j=0; j<points.size(); ++j) {
                if (i!=j) {
                    Point& p1 = points[i];
                    Point& p2 = points[j];
                    int cur = 2;
                    for (size_t k=0; k<points.size(); ++k) {
                        if (j!=k && i!=k) {
                            Point& p3 = points[k];
                            if (p1.x == p2.x && p1.y == p2.y) {
                                if (p3.x==p1.x && p3.y==p1.y)     ++cur;
                            }
                            else {
                                if ((p3.y-p1.y)*(p2.x-p1.x)==(p3.x-p1.x)*(p2.y-p1.y)) ++cur;
                            }
                        }
                    }
                    
                    if (cur>result) {
                        result = cur;
                    }
                }
            }
        }
        
        return result;
    }
};