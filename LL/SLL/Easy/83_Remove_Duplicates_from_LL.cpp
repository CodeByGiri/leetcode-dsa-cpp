// Problem: 83. Remove Duplicates from Sorted List
// Technique: Single Pointer Traversal
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        while(current != NULL && current->next != NULL){  //pointer traverses through LL
            if(current->val == current->next->val){  //adjacent elements are checked to be duplicates or not
                ListNode *temp = current->next;
                current->next = temp->next;
                delete temp;
            }
            else{
                current = current->next;
            }
        }
        return head;
    }
};