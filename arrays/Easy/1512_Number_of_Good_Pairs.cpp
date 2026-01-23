// Problem: 1512. Number of Good Pairs
// Difficulty: Easy
// Topic: Arrays



// Approach 1: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
            int count = 0;
            int n = nums.size();

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] == nums[j]) count++; //compares the values in indices and then increment
    
                }
            }
        return count;
    }
};

// -----------------------------------------------------------------

// Approach 2: Frequency Counting 
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int> freq;
        int n=nums.size();
        int count = 0;


        for(int i=0;i<n;i++){
            count += freq[nums[i]];   //process the current number and adds frequency of prev occurence to count
             freq[nums[i]]++; //increments the current occurence to frequency
        }

        return count;
    }
};