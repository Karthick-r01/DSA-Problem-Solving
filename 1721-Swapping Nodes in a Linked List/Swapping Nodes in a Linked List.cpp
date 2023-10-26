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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)  return NULL;
        if(head->next==NULL)    return head;
        if(head->next->next==NULL) {
            int val=head->val;
            head->val=head->next->val;
            head->next->val=val;

            return head;
        }
        ListNode* cur=head;
        int val1;
        int val2;
        int count=0;
        while(cur!=NULL) {
            count++;
            cur=cur->next;
        }

        int c=0;
        cur=head;
        while(cur!=NULL) {
            c++;
            if(c==k)    val1=cur->val;
            if(c==(count-k)+1)    val2=cur->val;
            cur=cur->next;
        }

        int h=0;
        cur=head;
        while(cur!=NULL) {
            h++;
            if(h==k)    cur->val=val2;
            if(h==(count-k)+1)    cur->val=val1;
            cur=cur->next;
        }

        return head;
    }
};
