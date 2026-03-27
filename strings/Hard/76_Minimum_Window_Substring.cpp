//76.Minimum Window Substring
//Method: Hashing + Sliding Window


class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> window;
        unordered_map<char,int> need;
        
        for(char c : t){
            need[c]++;
        }

        int have = 0; //how many unique chars satisfied in t
        int needCount = need.size(); // unique chars in t
        int minLen = INT_MAX;
        int start = 0; //Used for start of substring
        int l = 0;
        for(int r = 0; r < s.size() ; r++){
            window[s[r]]++;

            if(need.count(s[r]) && window[s[r]] == need[s[r]]){
                have++;
            }
            while(have == needCount){
                if(r-l+1 < minLen){
                    minLen = r - l + 1;
                    start = l;
                }

                window[s[l]]--;

                if(need.count(s[l]) && window[s[l]] < need[s[l]]){
                    have--; 
                } 
                l++;
            }
        }    
        if(minLen == INT_MAX) return "";
        return s.substr(start,minLen);
    }
};