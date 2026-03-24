//1004. Max Consecutive Ones III
//Method: Sliding Window
//Time Complexity: O(N)
//Space Complexity: O(1)
////

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int count = 0, l = 0, maxLen = 0;

        for(int r = 0; r<nums.size(); r++){
            if(nums[r] == 0) count++;

            while(count > k){
                if(nums[l] == 0) count--;
                l++;
            }
            maxLen = max(maxLen, (r-l+1));
        }

        return maxLen;
    }
};