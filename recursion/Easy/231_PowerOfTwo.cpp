// Problem: 231. Power of Two
// Approach: Recursive Division
// Time Complexity: O(log n)
// Space Complexity: O(log n)  (due to recursion call stack)


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        else if( n == 1 ) return true;
        else if( n%2 != 0) return false;
        else return isPowerOfTwo( n/2 );
    }
};


//Note: Optimal solution is bit manipulation for this question