//567. Permutations in a String
// Method: Sliding Window
//Time Complexity: O(n)
//Space Complexity:O(n)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        vector<int> count(26,0);
        for(char c : s1){
            count[c - 'a']++;
        }

        int k = s1.length(); //window size
        vector<int> target(26,0);

        for(int i = 0; i < k ; i++){
            target[s2[i] - 'a']++;
        }
        if(count == target) return true;

        int l = 0;
        for(int r = k; r < s2.length(); r++){
            target[s2[r] - 'a']++;
            target[s2[l] - 'a']--;
            
            l++;
            if(count == target) return true;
        }

        return false;
    }
};