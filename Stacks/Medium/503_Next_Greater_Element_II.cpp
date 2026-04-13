// 503. Next Greater Element II
// Topic : Stacks
////////
//Description: Idea is to find the greater element for rightmost occuring elements by seeing if larger elements for it occur before it, so for this
// We go for 2nd run through array, now on 2nd iteration we don't push the element into stack because it leads to duplicate pushes to stack.
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i = 0; i < 2*n ; i++){
            int num = nums[i % n];

            while(!st.empty() && num > nums[st.top()]){
                ans[st.top()] = num;
                st.pop();
            }
            if(i < n) st.push(i);
        }

        return ans;
    }
};
