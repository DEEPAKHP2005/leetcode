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
    ListNode* temp=head;
    ListNode* prev=NULL;
    while(temp!=NULL){
    ListNode* front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;
    }
    return prev;
}
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead=reverse(head);
        ListNode* temp1=newhead;
        int max=newhead->val;
        while(temp1->next!=NULL){
             if (temp1->next->val <max) {
                temp1->next = temp1->next->next;
            }
            else {
                temp1 = temp1->next;
                max = temp1->val;
            }
        }
        return reverse(newhead);
    }
};