;/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(head == NULL || head -> next == NULL){
            return false;
        }
        while(head != nullptr && head->next != nullptr){
            head = head->next->next;
            slow = slow->next;
            if(slow == head) return true;
        }
        return false;
    }
};