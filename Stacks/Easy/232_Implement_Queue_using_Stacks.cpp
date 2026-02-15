// Problem: 232. Implement Queue using Stacks
// Technique: Two Stacks (inStack + outStack)
// Time Complexity: Amortized O(1)
// Space Complexity: O(n)
// Idea:
// Push elements into inStack.
// For pop/peek, if outStack is empty, pour all elements from inStack into outStack.
// This reverses order and gives FIFO behavior.

class MyQueue {
public:

    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {}

    void push(int x) {
        inStack.push(x);
    }
    
    void pour(){
        while(!inStack.empty()){
            outStack.push(inStack.top());
            inStack.pop();
        }
    }
    int pop() {
        if (outStack.empty()){
            pour();
        }
        int front = outStack.top();
        outStack.pop();
        return front;
    }
    
    int peek() {
        if(outStack.empty()){
            pour();
        }
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};