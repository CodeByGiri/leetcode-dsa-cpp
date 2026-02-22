// Problem: 35. Search Insert Position
// Technique: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) return mid;

            else if(nums[mid] < target) low = mid + 1;

            else high = mid - 1;
        }
        return low; //If loop ended without finding a target, low returns the index where our target is to be inserted.
    }
};