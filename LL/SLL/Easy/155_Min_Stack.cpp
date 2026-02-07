// Problem: 155. Min Stack
// Technique: Two Stacks (Value + Minimum Tracking)
// Time Complexity: O(1) per operation
// Space Complexity: O(n)
//
//
// Idea:
// Maintain a normal stack for values and a second stack that stores
// the minimum value at each level. getMin() becomes minStack.top().

class MinStack {
public:
    stack<int> st;
    stack<int> minSt;


    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(minSt.empty()) minSt.push(val);

        else minSt.push(min(minSt.top(),val));
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};