// Problem: 496. Next Greater Element I
// Technique: Next Greater Element Mapping
// Time Complexity: O(n + m)
// Space Complexity: O(n)

//Idea : We traverse through nums2 array with a monotic decreasing stack.
// We push each element one by one into the stack and compare that element with the upcomming elements to see which is the next greater element to it in the array.
// If element exists. we map the element in the stack to the greater element found.
//After the traversal, if elements are there with no greater elements, they are gonna be present in the stack. We map these elements to -1 and pop them from stack until stack is empty.
// Now, traverse nums1 and push all the respective values for the elements from the map into the ans array and return it.

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> nextGreater;
        stack<int> st;

        for(int x : nums2){
            while(!st.empty() && st.top() < x){
                nextGreater[st.top()] = x;
                st.pop();
            }

            st.push(x);
        }

        while(!st.empty()){
            nextGreater[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for(int num : nums1){
            ans.push_back(nextGreater[num]);
        }

        return ans;
    }
};