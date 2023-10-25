/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    
    //Reverse Linked List using RECURSION

    if(head==NULL ||head->next==NULL)
        return head;

    struct ListNode* n=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return n;
}
