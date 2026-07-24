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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* sec=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==nullptr){
            ListNode* first=head;
            head=head->next;
            delete(first);
            return head;
        }
        while(fast->next){
            sec=sec->next;
            fast=fast->next;
        }
        ListNode* dummy=sec->next;
        sec->next=sec->next->next;
        delete(dummy);
        return head;
    }
};
