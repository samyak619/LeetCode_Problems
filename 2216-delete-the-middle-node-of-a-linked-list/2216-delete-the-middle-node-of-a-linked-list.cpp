/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // if(head && head->next){
        //     return head;
        // }

        // ListNode* fast = head;
        // ListNode* slow = head;
        
        // while(fast && fast->next){
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }
        // ListNode* temp = slow->next;
        // slow->val = temp->val;
        // slow->next = temp->next;
        // delete temp;
        // return head;
        if (!head) {
        return nullptr;  // Handle the case of an empty list
    }

    ListNode* fast = head;
    ListNode* slow = head;
    
    ListNode* prev = nullptr; // To keep track of the node before slow

    while (fast && fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (prev) {
        prev->next = slow->next;
    } else {
        head = slow->next; // Update head if slow was the first element
    }

    delete slow;
    return head;

    }
};