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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* a=temp;
        ListNode* b=temp->next;
        while(b!=NULL){
            if(a->val==b->val){
                a->next=b->next;
                b=b->next;
            }
            else {
            a=b;
            b=b->next;}
        }
        return temp;
    }
};