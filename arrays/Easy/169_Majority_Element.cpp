//169.Majority Element
//Array Based
//We are trying to find the mode of an array, i.e, the element which appears the most no of times in the array.
//We start by considering an element to be the candidate for the mode element, and as soon as we find it repeating, we count the no of occurences in another variable count 
//And as soon as we encounter a new element, we consider it to be the candidate and repeat the process.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int candidate = nums[0];
        int count = 1;

        for(int i = 0; i< nums.size();i++){
            if(nums[i] == candidate) count++;
            else count--;

            if(count == 0){
                candidate = nums[i];
                count = 1;
            }
        }
        return candidate;
    }
};
