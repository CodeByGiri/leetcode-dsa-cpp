// Problem: 142. Linked List Cycle II
// Technique: Floyd’s Cycle Detection + Entry Point
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow = head;
        ListNode *fast = head; 

        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                ListNode *entry = head;

                while(slow != entry){
                    entry = entry->next;
                    slow = slow->next;
                }

                return entry;
            }
        }

        return NULL;
    }
};

// IDEA EXPLAINED:

//It uses floyd cycle entry algo.

//It works in two phase : Firs phase trying to detect the presence of a cycle and second phase trying to find the start point of the cycle.

// Use slow and fast pointers to detect a cycle (Same as Leetcode 141)

// When they meet, start a new pointer from head(entry node)
//Now we have a pointer that starts from head and other which already exists in the cycle. We move both these pointers one step ahead. 
// Since the distance from head to the cycle start equals the distance from the meeting point to the cycle start,
// moving both pointers one step at a time guarantees they meet exactly at the entry node.(i.e, they'll wrap around to make the nodes equal)

