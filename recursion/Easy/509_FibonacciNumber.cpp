// Problem: 509. Fibonacci Number
// Approach: Naive Recursive Solution
// Time Complexity: O(2^n)
// Space Complexity: O(n)  (due to recursion call stack)

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        else if(n == 1) return 1;
        else return (fib(n-1) + fib(n-2)) ;
    }
};



// Note:
// This is not the optimal solution for large n. There are different ways with the help of dp. Will be done once learned.