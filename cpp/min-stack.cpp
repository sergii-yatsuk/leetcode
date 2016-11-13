class MinStack {
public:
   /** initialize your data structure here. */
   MinStack() {

   }

   void push(int x) {
      st.push(x);
      if (!mst.empty()) {
         int currentMinEl = mst.top();
         if (x <= currentMinEl) mst.push(x);
      }
      else mst.push(x);
   }

   void pop() {
      if (st.empty()) return;

      int x = st.top();
      st.pop();

      if (x == mst.top()) mst.pop();

   }

   int top() {
      if (st.empty()) return -1;
      else return st.top();
   }

   int getMin() {
      if (mst.empty()) return -1;
      else return mst.top();
   }

private:
   stack<int> st;
   stack<int> mst;
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(x);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/