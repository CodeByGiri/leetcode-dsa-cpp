// Problem: 1920. Build Array from Permutation
// Difficulty: Easy
// Topic: Arrays
// Approach: Direct Index Mapping
// Time Complexity: O(n)
// Space Complexity: O(1)  (excluding output array)


class Solution {
public:
    vector<int> buildArray(vector<int> &nums) {
        int n=nums.size();
        vector<int> ans(n);   //Try to use vectors rather than local arrays to return dynamic sized results
        for(int i=0;i<n;i++){
            ans[i]=nums[nums[i]];
        }
    return ans;      
    }
};