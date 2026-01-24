// Problem: 387. First Unique Character in a String
// Approach: Frequency Counting (Vector)
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> freq(26, 0);  //Since all characters lowercase, range fixed,  use vector instead of maps


        for (int i = 0; i < s.length(); i++) {   
            freq[s[i] - 'a']++;         //Counts frequency of each character in string
        }


        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {       //If any character occured only one time in string, return index
                return i;
            }
        }

        return -1;
    }
};
