// Problem: 1. Two Sum
// Difficulty: Easy
// Topic: Arrays

// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        // Check every possible pair
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {}; // Safety return
    }
};


// Approach: Space Mapping 
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> mp;

        for(int i=0;i<nums.size();i++){
            int needed = target - nums[i];

            if(mp.find(needed)!=mp.end()){   //Checks for if the needed number has been seen in the map
                return {i,mp[needed]}; 
            }

            mp[nums[i]]=i;  //Adds the current processed number as key and its index as value to the map.
        }
        return {};  //C++ expects a return, just giving it
    }
};