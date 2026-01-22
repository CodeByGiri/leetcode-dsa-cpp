// Problem: 1480. Running Sum of 1d Array
// Difficulty: Easy
// Topic: Arrays
// Approach: Prefix Sum
// Time: O(n)
// Space: O(1)

class Solution {
public:
    vector<int> runningSum(vector<int>  &nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){    //Cache nums.size() in a variable for larger problems
            sum += nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};