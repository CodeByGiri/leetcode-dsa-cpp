// Problem: 326. Power of Three
// Approach: Recursive Division
// Time Complexity: O(log₃ n)
// Space Complexity: O(log₃ n)  (due to recursion call stack)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0) return false;
        if( n==1 ) return true;
        if ( n%3 != 0 ) return false;  //Only power of 3 possible if no is a factor of 3
        else return isPowerOfThree( n/3 ); //divide until base case achieved
    }
};


//Note: Iterative or mathematical solutions are more optimal in practice.