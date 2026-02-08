// Problem: 21. Merge Two Sorted Lists
// Technique: Dummy Node + Two Pointers
// Time Complexity: O(n + m)
// Space Complexity: O(1)


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *dummy = new ListNode(0);
        ListNode *tail = dummy;

        while(list1 != NULL && list2 != NULL){

            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }

            else{
                tail->next = list2;
                list2 = list2->next;
            }

            tail=tail->next;
        }

        if(list1 != NULL) tail->next = list1;
        else tail->next = list2;

        return dummy->next;
    }
};


// IDEA EXPLAINED:
// Use a dummy node and a tail pointer to build the merged list.
// Compare the current nodes of both lists, attach the smaller one,
// and move forward. Finally, attach the remaining nodes.
