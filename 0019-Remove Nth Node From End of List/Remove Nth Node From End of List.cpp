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
        if(head==NULL) return head;
        
        int count=0;
        ListNode* c=head;
        while(c!=NULL) {
            count++;
            c=c->next;
        }


        int k=count-n;
        int count2=0;
        ListNode* dummy = head;
        while(dummy!=NULL && dummy->next!=NULL) {
            count2++;
            if(count2==k) {
                ListNode* node=dummy->next;
                delete(node);
                break;
            }
            dummy=dummy->next;
        }

        dummy->next=dummy->next->next;

        return head;
    }
};
