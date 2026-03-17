// Problem: 33. Search in Rotated Sorted Array
// Technique: Modified Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)
///
// Idea: When an array is rotated, only half of it would be sorted, the other half is gonna have a disruption due to the presence of mid element. So we check which side is sorted first.
//Once we find the sorted side, we try to check the presence of target in that side since that half is sorted and it acts like normal binary search. 
//If no elements are found, we return -1.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();

        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) return mid;
            
            //Check which half sorted
            if(nums[low] <= nums[mid]){

                //When left half sorted, see if target inside left half
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{  //right half sorted

                //check if element in right half
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};