// Problem: 206. Reverse Linked List
// Technique: Iterative Pointer Reversal
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = NULL;
        ListNode* current = head;

        if(current == NULL){
            return head;
        }

        while(current != NULL){
            ListNode* next = current->next;
            current -> next = prev;
            prev = current;
            current = next;
        }

    return prev;
    }
};