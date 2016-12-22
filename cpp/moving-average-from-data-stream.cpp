// https://leetcode.com/problems/moving-average-from-data-stream/

class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        sum = 0;
        m_size = size;
    }
    
    double next(int val) {
        if (q.size() == m_size) {
            sum -= q.front();
            q.pop();
        }
        
        sum += val;
        q.push(val);
        return sum / double(q.size());
        
        
    }
    
private:
   int m_size;
   long sum;
   queue<int> q;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */