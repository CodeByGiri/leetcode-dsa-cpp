// Problem: 977. Squares of a Sorted Array
// Technique: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(n)


//Note: Logic I've applied is pretty simple, they've asked to square and compare but mathematically, it does not matter because any number which is absolutely greater than other number
//will have a square that is the greater than the other number. Applying it with the help of two pointer in a sorted array, I've compared two elements from left to right whichever has higher absolute
// is placed in the end of the resultant array.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> result(n);

        int l=0;  //left pointer for i/p array
        int r=n-1; //right pointer for o/p array
        int k=n-1; //stores index values for result array

        while(l<=r){

        
            if(abs(nums[l]) > abs(nums[r])){   
                 result[k] = nums[l]*nums[l];
                 l++;
             }
             else{
                result[k] = nums[r]*nums[r];
                r--;
            }
            k--;
        }
        return result; 
    }
};