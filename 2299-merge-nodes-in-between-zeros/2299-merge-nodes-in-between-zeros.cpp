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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* ptr = new ListNode(0);
        ListNode* node = ptr;
        int sum = 0;
        temp = temp->next;
        while(temp){
            while(temp->val!=0){
                sum += temp->val;
                temp = temp->next;
            }
            node->next = new ListNode(sum);
            node = node->next;
            temp = temp->next;
            sum = 0;
        }
        return ptr->next;
    }
};