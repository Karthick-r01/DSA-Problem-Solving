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
    int pairSum(ListNode* head) {
        stack<int> st;
        int res=0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }

        //slow=slow->next;
        while(slow!=NULL) {
            st.push(slow->val);
            slow=slow->next;
        }
        ListNode* dummy=head;

        while(!st.empty()) {
            int sum=dummy->val+st.top();
            res=max(res, sum);
            dummy=dummy->next;
            st.pop();
        }

        return res;
    }
};
