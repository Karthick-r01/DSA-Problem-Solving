/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==NULL || headB==NULL)  return NULL;
        struct ListNode* l1=headA;
        struct ListNode* l2=headB;
        while(l1!=l2) {
            l1=l1==NULL?headB:l1->next;
            l2=l2==NULL?headA:l2->next;
        }
        return l1;
}
