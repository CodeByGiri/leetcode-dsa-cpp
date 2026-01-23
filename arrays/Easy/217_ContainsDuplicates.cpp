// Problem: 217. Contains Duplicate Set
// Approach: Hash Map(Tracking Frequency)
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> freq;

        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]>=1){   //Checks if element already exist in map, cause even if freq is 1, it means element was seen one time before
                return true;
            }
            freq[nums[i]]++;  //Increment the frequency after the check
        }
        return false;
    }
};



//This is not the optimal solution and optimal will be implemented as soon as I learn about it.