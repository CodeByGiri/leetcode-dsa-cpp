//3.Longest Substring without repeating characters
//Mehtod: Sliding Window
//Complexity(Time) : O(n);
///
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxLen = 0;
        unordered_set<char> st;

        for(int r = 0; r < s.size(); r++){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);

            maxLen = max(maxLen, (r - l + 1));        
        }

        return maxLen;
    }
};
