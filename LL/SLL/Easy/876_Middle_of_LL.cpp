// Problem: 876. Middle of the Linked List
// Technique: Counting Nodes
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head){
    int count = 0;
    ListNode* temp = head;

    while(temp != NULL){  
        count++;    //Get total count of nodes in LL
        temp = temp->next;
    }

    int mid = count / 2;
    temp = head;

    for(int i = 0; i < mid; i++){
        temp = temp->next;   //Find the middle node
    }

    return temp;

    }
};


if(head == NULL) return head;

ListNode *fast = head;
ListNode *slow = head;

while(fast != NULL && fast->next != NULL){
    slow = slow->Next;
    fast = fast->next->next;
}

return slow;