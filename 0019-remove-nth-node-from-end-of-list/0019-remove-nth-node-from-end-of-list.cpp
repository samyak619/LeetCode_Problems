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
    ListNode* removeNthFromEnd(ListNode* head, int n){
        // if(head->next == nullptr) return nullptr;
        // ListNode* temp = head; 
        // int len = 0;
        // while(temp != nullptr) {temp = temp->next; len++;}
        // if(n == len) return head->next;
        // ListNode* prev = head;
        // int size = len - n;
        // int i = 1;
        // while(i<size){i++; prev = prev->next;}
        // prev->next = prev->next->next;
        // return head;
        if (!head || n <= 0) return head;

        ListNode* dummy = new ListNode(0); // Create a dummy node to handle edge cases
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move the fast pointer n+1 nodes ahead
        for (int i = 0; i < n + 1; ++i) {
            if (!fast) {
                // Handle cases where n is greater than or equal to the length of the list
                delete dummy;
                return head;
            }
            fast = fast->next;
        }

        // Move both fast and slow pointers until fast reaches the end
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from the end
        ListNode* toRemove = slow->next;
        slow->next = toRemove->next;
        delete toRemove;

        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};