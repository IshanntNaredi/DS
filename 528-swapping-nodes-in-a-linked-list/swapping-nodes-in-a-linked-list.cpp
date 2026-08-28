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
        ListNode* first=head;
        for(int i=1;i<k;i++){
            first=first->next;
        }

        ListNode* fast=head;
        ListNode* slow=head;

        for(int i=0;i<k;i++){
            fast=fast->next;
        }

        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        int temp=first->val;
        first->val=slow->val;
        slow->val=temp;

        return head;
    }
};