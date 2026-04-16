
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int max_Area = 0;

        for(int i = 0; i < n;i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int idx = st.top();
                st.pop();
                int width = 0;

                if(st.empty()) width = i;
                else width = (i - st.top() - 1);

                int area = width * heights[idx];
                max_Area = max(max_Area,area);
            }
            st.push(i);
        }
        
        while(!st.empty()){
            int idx = st.top();
            st.pop();

            int width;
            if(st.empty()) width = n;
            else width = n - st.top() - 1;

            int area = width * heights[idx];
            max_Area = max(area, max_Area);
        }

        return max_Area;
    }
};
