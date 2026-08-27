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
    ListNode* newHead=reverse(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
}
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        ListNode dummy(0);
        ListNode* pointer=&dummy;
        int carry=0;
        while(temp){
            int val=(temp->val*2)+ carry;
            carry=val/10;
            pointer->next=new ListNode(val%10);
            pointer=pointer->next;
            temp=temp->next;
        }
        if(carry){
            pointer->next= new ListNode(carry);
        }
        return reverse(dummy.next);

    }
};