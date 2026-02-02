// Problem: 1290. Convert Binary Number in a Linked List to Integer
// Technique: Iterative Traversal (Streaming Build)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int ans = 0;
        while(temp!=NULL){
            ans = ans*2 + temp->val;
            temp=temp->next;
        }

        return ans;
    }
};

// The ans is treated as a binary number being build incrementally i.e, we append a binary digit in a way which is equivalent to left-shifting 
// the current number and adding the new bit.