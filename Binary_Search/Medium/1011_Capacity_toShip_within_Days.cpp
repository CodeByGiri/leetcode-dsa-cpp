class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = low + (high - low)/2;

            int curr_load = 0;
            int D = 1;

            for(int weight : weights){
                if(curr_load + weight <= mid){
                    curr_load += weight;
                }
                else{
                    curr_load = weight;
                    D++;
                }
            }
            if(D <= days){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};