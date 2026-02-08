// Problem: 160. Intersection of Two Linked Lists
// Technique: Two Pointer Switching
// Time Complexity: O(n + m)
// Space Complexity: O(1)

// Idea:
// Traverse both lists using two pointers.
// When a pointer reaches the end, redirect it to the other list.
// We are doing this because unequal length LL's when we are traversing one might skip the intersection point because other might have not reached there.


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL) return NULL;

        ListNode *pA = headA;
        ListNode *pB = headB;

        while(pA != pB){

            pA = (pA == NULL) ? headB : pA->next;
            pB = (pB == NULL) ? headA : pB->next;

        }

        return pA;
    }
};