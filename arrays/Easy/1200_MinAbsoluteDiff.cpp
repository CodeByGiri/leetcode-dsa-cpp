// Problem: 1200. Minimum Absolute Difference
// Technique: Sorting + Single Pass Comparison
// Time Complexity: O(n log n)  (due to sorting)
// Space Complexity: O(1) extra  (excluding output)

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> ans; //2D array which holds each pair as a 1D array inside it

        sort(arr.begin(),arr.end());

        int n=arr.size();
        int minDiff = arr[1]-arr[0];    //minDiff= INT_MAX can also be used

        for(int i=1;i<n;i++){
             minDiff=min(minDiff,arr[i]-arr[i-1]); //Find the absolute minimum difference 
        }

        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1]) == minDiff){
                ans.push_back({arr[i-1],arr[i]}); //Make a temporary 1D array of size 2 and push it to ans
            }
        }
    return ans;
    }
};
