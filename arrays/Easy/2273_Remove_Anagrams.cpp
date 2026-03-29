//2273. Remove Anagrams
// Requires u to remove anagrams from words.Go through word by word, sort them, duplicates will be adjacent to each other.
//first occurence of each new word, push it to ans array.

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> ans;

        for(int i = 0; i < words.size(); i++){
            string curr = words[i];
            sort(curr.begin(),curr.end());

            if(ans.empty()){
                ans.push_back(words[i]);
            }else{
                string prev = ans.back();
                sort(prev.begin(),prev.end());

                if(curr != prev){
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};