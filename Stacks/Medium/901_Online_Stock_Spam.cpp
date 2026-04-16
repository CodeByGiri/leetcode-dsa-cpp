//901. Online Stock Spam
//Topic: Stacks
// In this, stack holds a pair of both price and span for which it stayed highest in an array and then that is pushed into the stack.
//Basically, next greater but here it's a pair
class StockSpanner {
public:

    stack<pair<int,int>> st;

    StockSpanner() {
    }
    
    int next(int price) {
        int span = 1;

        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }

        st.push({price,span});
        return span;
    }
};

