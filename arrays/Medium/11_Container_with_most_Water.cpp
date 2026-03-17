// Problem: 11. Container With Most Water
// Technique: Two Pointers (Greedy)
// Time Complexity: O(n)
// Space Complexity: O(1)

//area = width * height 
// width is difference between last and first pointer
//height is the shorter height of the height of lines we choose
///
//objective is to maximize area, so we need to take two lines in such a way such that min(height) is the a large value and a decent amt of width is possible
//ex: a scenario where we have width 5 and height of lines as(6,8) is much better than a width of 6 and height of lines of(3,8) cause area is more for the former.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxArea = 0;

        while(l < r){
            int h = min(height[l], height[r]);
            int width = r-l;
            int area = width * h;

            maxArea = max(maxArea, area);

            if(height[l] < height[r]) l++;
            else r--;
        }
        return maxArea;
    }
};