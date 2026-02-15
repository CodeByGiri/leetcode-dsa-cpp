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