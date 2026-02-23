// Problem: 2. Add Two Numbers
// Technique: Linked List Traversal + Carry Simulation
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))

// Idea:
// Traverse both linked lists simultaneously.
// At each step, add corresponding digits along with carry.
// Store (sum % 10) as new digit node.
// Update carry as (sum / 10).
// Continue until both lists end and carry becomes 0.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *dummy = new ListNode(0);
        ListNode *tail = dummy;
        int carry = 0;
        int sum = 0;
        while(l1 != NULL || l2 != NULL || carry){

            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;

            sum = val1 + val2 + carry;

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        
        return dummy -> next;
    }
};
