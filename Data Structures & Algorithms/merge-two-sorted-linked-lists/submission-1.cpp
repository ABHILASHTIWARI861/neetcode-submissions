class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        ListNode* dummy=new ListNode(-1);
        ListNode* temp = dummy;

        while (t1 && t2) {

            if (t1->val <= t2->val) {
                temp->next = t1;
                t1 = t1->next;
            }
            else {
                temp->next = t2;
                t2 = t2->next;
            }

            temp = temp->next;
        }

        if (t1)
            temp->next = t1;
        else
            temp->next = t2;

        return dummy->next;
    }
};
