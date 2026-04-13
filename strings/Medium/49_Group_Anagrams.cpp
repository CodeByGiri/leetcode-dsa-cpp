//49. Group Anagrams
// Method: Hashing
//
//Description: In a vector of string of words, we need to group different anagrams together, we sort the words, so we get a common key for anagrams, we push them to a hash map, and then in the ans array,
// we push the group of different anagrams back as output.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mp;

        for (string word : strs){
            string key = word;
            sort(key.begin(),key.end());

            mp[key].push_back(word);
        }

        vector<vector<string>> ans;

        for(auto &it : mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};
