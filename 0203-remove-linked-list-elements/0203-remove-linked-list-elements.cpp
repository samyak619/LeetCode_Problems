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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp;
        while(head != NULL && head->val==val){
            temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp1 = head;
        while(temp1 && temp1->next){
            if(temp1->next->val == val){
                temp = temp1->next;
                temp1->next = temp->next;
                delete temp;
            }
            else{
                temp1 = temp1->next;
            }
        }
        return head;
    }
};