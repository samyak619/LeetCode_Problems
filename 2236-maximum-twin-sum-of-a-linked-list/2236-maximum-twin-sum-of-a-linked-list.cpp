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
    int pairSum(ListNode* head) {
        int len = 0;
        ListNode * temp = head;
        while(temp != nullptr && temp->next != nullptr){
            len++;
            temp = temp->next;
        }
        ListNode* mid = head;
        len = (len/2);
        while(len--) mid = mid->next;
        ListNode *secNull = mid->next;
        ListNode* curr = secNull;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* head2 = prev;
        int sum = 0;
        while(head && head2){
            int temp = 0;
            temp = head->val + head2->val;
            sum = max(temp, sum);
            head = head->next;
            head2 = head2->next;
        }
        return sum;
    // int len = 0;
    // ListNode* temp = head;

    // while (temp != nullptr && temp->next != nullptr) {
    //     len++;
    //     temp = temp->next;
    // }

    // ListNode* mid = head;
    // len = (len / 2);

    // while (len--)
    //     mid = mid->next;
    // ListNode* secNull = mid->next;
    // ListNode* curr = secNull;
    // ListNode* prev = nullptr;
    // ListNode* next = nullptr;
    
    // while (curr) {
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }

    // ListNode* head2 = prev;
    // int sum = 0;

    // while (head && head2) {
    //     int temp = 0;
    //     temp = head->val + head2->val;
    //     sum = max(temp, sum);
    //     head = head->next;
    //     head2 = head2->next;
    // }

    // return sum;
    }
};