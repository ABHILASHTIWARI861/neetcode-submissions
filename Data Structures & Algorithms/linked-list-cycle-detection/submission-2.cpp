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
    bool hasCycle(ListNode* head) {
        ListNode* first=head;
        ListNode* sec=head;
        while(first!=nullptr && first->next!=nullptr){
            first=first->next->next;
            sec=sec->next;
            if(sec==first){
                return true;
            }
        }
        return false;
    }
};
