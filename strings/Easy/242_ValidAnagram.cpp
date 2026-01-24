// Problem: 242. Valid Anagram


// Approach: Frequency Counting (Hash Map)
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {

        int m=s.length();
        int n=t.length();

        if(m != n){
            return false;
        }

        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){   //Add the frequency of characters from string 's' in map
            freq[s[i]]++;
        }

        for(int i=0;i<n;i++){
            freq[t[i]]--;   //subtract the frequency of characters from string 't' in same map

            if(freq[t[i]]<0){  //check if frequency of any acharacters went negative
                return false;
            }
        }
        return true;
    }
};


// -----------------------------------------------------------
// Approach: Frequency Counting (Array / Vector)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        vector<int> freq(26, 0);   //Vector used cause all characters are lowercase, therefore, range fixed.

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;    //single step vector linking, s[i] character frequencies are added
            freq[t[i] - 'a']--;     //t[i] character frequencies are subtracted
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {         //Check if any of vectors have frequency below zero
                return false;
            }
        }

        return true;
    }
};