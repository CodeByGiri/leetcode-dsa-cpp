// Problem: 234. Palindrome Linked List
// Technique: Slow & Fast Pointers + In-place Reversal
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL) return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        //Now slow is the head of the second half of our LL, we'll reverse this half now

        ListNode *prev = NULL;
        ListNode *current = slow;

        while(current != NULL){
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        ListNode *head1 = head;
        while(prev != NULL){
            if(head1->val != prev->val) return false;
            head1 = head1->next;
            prev=prev->next;
        }
        return true;
    }
};


if(head == NULL) return false;

ListNode *fast = head;
ListNode *slow = head;

while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
}


ListNode *prev = NULL;
ListNode *current = slow;

while(current != NULL){
    ListNode *next = current->next;
    current->next = prev;
    prev = current;
    current = next;
}

ListNode *head1 = prev;

while(prev != NULL){
    if(head->val != head1->val) return false
    head1 = head1->next;
    prev = prev->next;
}
return true;