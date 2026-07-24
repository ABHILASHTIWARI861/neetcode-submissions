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
        if(head==nullptr ){
          return nullptr;
        }
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int pos=cnt-n;
        if(pos==0){
            ListNode* remove=head;
            head=head->next;
            delete(remove);
            return head;
        }
        temp=head;
        int k=1;
        while(temp!=nullptr && k<pos){
         k++;
         temp=temp->next;
        }
        ListNode* dummy=temp->next;
        temp->next=temp->next->next;
        delete(dummy);
        return head;
    }
};
