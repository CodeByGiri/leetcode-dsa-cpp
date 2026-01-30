// Problem: 203. Remove Linked List Elements
// Technique: Pointer Manipulation
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        while( head != NULL && head->val == val){
            ListNode* temp = head;
            head=temp->next;
            delete temp;
        }

        if(head == NULL ) return head;

        ListNode* prev = head;
        ListNode* current = head->next;

        while(current != NULL){
            if(current->val == val){
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else{
                prev=current;
                current=current->next;
            }
        }

        return head;    
    }
    
};