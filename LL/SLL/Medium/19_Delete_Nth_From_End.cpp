// Problem: 19. Remove Nth Node From End of List
// Technique: Two Pointers + Dummy Node
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *fast = dummy;
        ListNode *slow = dummy;

        for(int i=0 ; i<n ; i++){
            fast = fast->next;
        }

        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *Del = slow->next;
        slow->next = slow->next->next;

        delete Del;

        return dummy->next;
    }
};



//IDEA EXPLAINED:

//Rather than making a separate case to deal with head deletion, we make a dummy before head so head deletion can be implemented with the normal deletion logic.
//We gotta move fast pointer n steps forward so that a gap of n is created between fast and slow pointer, after which we will be running both pointer together till
// fast points to NULL. At this point, slow will be the node just before the node which we wanna delete.