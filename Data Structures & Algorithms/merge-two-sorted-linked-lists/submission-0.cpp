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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp;
        ListNode* t1=list1;
        ListNode* t2=list2;
        vector<int>ans;
        while(t1!=nullptr && t2!=nullptr){
            if(t2->val > t1->val){
                ans.push_back(t1->val);
                t1=t1->next;
            }
            else{
                ans.push_back(t2->val);
                t2=t2->next;
            }            
        }
        while(t1){
            ans.push_back(t1->val);
            t1=t1->next;        
        }
        while(t2){
            ans.push_back(t2->val);
            t2=t2->next;
        }
    
    if (ans.empty())
        return nullptr;

      int n=ans.size();
      ListNode* first=new ListNode(ans[0]);
      ListNode* dummy=first;
      int i=1;
      while(n>i){
        temp=new ListNode(ans[i]);
        dummy->next=temp;
        dummy=temp;
        i++;
      }
      return first;
    }
};
