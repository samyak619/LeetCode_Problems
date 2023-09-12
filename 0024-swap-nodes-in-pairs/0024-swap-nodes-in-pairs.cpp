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
    ListNode* swapPairs(ListNode* head) {
    // if (head == nullptr || head->next == nullptr) {
    //     return head;
    // }
    // ListNode* prev = head, *curr =  head->next->next, *temp;
    // head = head->next;
    // head->next = prev;
    // prev = head;
    // curr = prev->next;
    // while(curr != nullptr && curr->next != nullptr){
    //     temp = curr->next;
    //     prev->next = temp;
    //     curr->next = prev;
    //     prev = temp;
    //     curr = prev->next;
    // }
    // return head;
        


    if(head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode *newHead = head->next;
    ListNode *prev = nullptr;
    while(head && head->next){
        ListNode *first = head;
        ListNode *second = head->next;
        if(prev) prev->next = second;
        first->next = second->next;
        second->next = first;
        prev = first;
        head = first->next;
    }

    return newHead;

}

};