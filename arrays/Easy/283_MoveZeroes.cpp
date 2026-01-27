// Problem: 283. Move Zeroes
// Technique: Two Pointers (In-place)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int pos = 0;    //To keep track of where to start place  0's

        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){ 
                nums[pos]=nums[i];       //places the non-zeroes in relative position
                pos++;
            }
        }
        for(int i=pos;i<nums.size();i++){  //iterate through the remaining spots to fill with 0
            nums[i]=0;    
        }
    }
};