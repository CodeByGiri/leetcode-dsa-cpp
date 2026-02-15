// Problem: 496. Next Greater Element I
// Technique: Next Greater Element Mapping
// Time Complexity: O(n + m)
// Space Complexity: O(n)
//
// Idea: Like we did for next greater element, we will be storing the coming indices of the temps to the stack, then we will check if temp in current indice is greater than temp in stack.top() indice.
// If the check comes out to be true, we check the difference between these indices and store them in the ans array, then we push the current indice into the stack and continue the check for it with next
//indices and so on.

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        
        for(int i=0; i<n ; i++){

            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;
            }

            st.push(i);
        }

        return ans;
    }
};