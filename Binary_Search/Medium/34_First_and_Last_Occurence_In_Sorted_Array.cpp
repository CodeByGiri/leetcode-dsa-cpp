class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int first = -1, last = -1;

        // For first occurence
        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                first = mid; 
                high = mid - 1;  //move left to go for first
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        // For last occurence
        low = 0, high = n-1;
         while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                last = mid;
                low = mid + 1; // move right to go for last
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return {first,last};
    }

    
};