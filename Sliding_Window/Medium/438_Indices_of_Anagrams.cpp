//438. Find indices of all anagrams in a word
//Method: Hashing + Sliding Window

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;

        vector<int> count(26,0);
        for(char c : p){
            count[c - 'a']++;
        }

        int k = p.length();
        int l = 0;
        vector<int> target(26,0);

        for(int r = 0; r < s.size() ; r++){
            target[s[r] - 'a']++;

            if(r - l + 1 > k){
                target[s[l] - 'a']--;
                l++;
            }

            if(r - l + 1 == k){
                if(target == count){
                    ans.push_back(l);
                }
            }
        }
        return ans;
    }
};