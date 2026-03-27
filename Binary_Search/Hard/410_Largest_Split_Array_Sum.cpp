class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        
        while(low <= high){
            int mid = low + (high-low)/2;

            int count = 0, parts = 1; //sum of each subarray and no of subarrays

            for(int num : nums){
                count += num;

                if(count > mid){
                    parts++;
                    count = num; //start new subarray sum with first element
                }
            }
            if(parts <= k) high = mid - 1;
            else low = mid+1;
        }

        return low;
    }
};