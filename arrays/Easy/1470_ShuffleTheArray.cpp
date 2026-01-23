// Problem: 1470. Shuffle the Array
// Approach: Index Mapping
// Time Complexity: O(n)
// Space Complexity: O(n)  (output array included)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> ans(2*n); //Output array of size 2n

        for(int i=0;i<n;i++){
            ans[2*i] = nums[i];    //how 1st half is dealt
            ans[2*i+1] = nums[n+i];   //how 2nd half is dealt
        }

        return ans;  //return o/p array
    }
};