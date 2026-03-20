//Problem No.643
//Maximum SubArray I
//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0; int max_Sum = 0;

        int sum = 0;
        for(int i = 0; i < k ; i++){ //Build maxsum for first window
            sum += nums[i];
        }
        max_Sum = sum;
        for(int r = k; r < nums.size(); r++){  //for each window appearing next, do updates only to existing sum, don't add every variable each time
            sum = sum + nums[r] - nums[l]; //remove left and add new element in window.
            l++;

            max_Sum = max(max_Sum, sum);
        }

        return (double) max_Sum/k;  //return average
    }
};