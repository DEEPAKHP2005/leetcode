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
ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* front=head->next;
        ListNode* newhead=reverse(head->next);
        front->next=head;
        head->next=nullptr;
        return newhead;
}
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        int sum=0;
        ListNode* newslow=reverse(slow);
        ListNode* frist=head;
        ListNode* second=newslow;
        while(second!=NULL){
            sum=max(sum,frist->val+second->val);
            frist=frist->next;
            second=second->next;
        }
        return sum;
    }
};