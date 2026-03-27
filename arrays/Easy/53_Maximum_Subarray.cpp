class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i<nums.size(); i++){
            
            curr_sum = max(nums[i], curr_sum + nums[i]);
            maxSum = max(maxSum,curr_sum);
        }
        return maxSum;
    }
};