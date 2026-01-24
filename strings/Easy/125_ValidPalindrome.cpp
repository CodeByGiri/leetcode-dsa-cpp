// Problem: 125. Valid Palindrome
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {    
            if (!isalnum(s[i])) {     //skips non-alphanumeric from first half
                i++;
                continue;
            }

            if (!isalnum(s[j])) {   //skips non-alphanumeric from second half
                j--; 
                continue;
            }

            if (tolower(s[i]) != tolower(s[j])) {   //compares the characters
                return false;
            }

            i++;   //updates variables for next iteration
            j--;
        } 
        return true;     //palindrome proved if loop finished
    }
};
