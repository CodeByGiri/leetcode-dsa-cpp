// Problem: 1461. Check If a String Contains All Binary Codes of Size K
// Technique: Sliding Window + Hash Set
// Time Complexity: O(n * k)
// Space Complexity: O(2^k)
//
// Idea: Initially, I thought we'll need to manually check all combinations of size k and update a variable when it doesn't match, but something's much simpler. You never need to check the combinations
// You just need to match the length. so initial rejection check, see if the windows in the string is less than the no of possible combinations of size k. IF YES, INSTANT REJECT.
// But then, the windows we have might contain duplicates, so main check we are gonna do is if the no of  windows with unique substrings is equal to the no of combinations. If yes, then true
// else, false.

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        int n = s.length();

        if(n - k + 1 < (1 << k)) return false;

        unordered_set<string> st;
        
        for(int i = 0; i <= n-k ; i++){
            st.insert(s.substr(i,k));
        }

        return st.size() == (1 << k);
    }
};