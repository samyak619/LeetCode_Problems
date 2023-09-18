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
        if(head->next == nullptr) return nullptr;
        ListNode* temp = head; 
        int len = 0;
        while(temp != nullptr) {temp = temp->next; len++;}
        if(n == len) return head->next;
        ListNode* prev = head;
        int size = len - n;
        int i = 1;
        while(i<size){i++; prev = prev->next;}
        prev->next = prev->next->next;
        return head;
    }
};