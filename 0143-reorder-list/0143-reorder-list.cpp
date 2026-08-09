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
    ListNode* reverse(ListNode* start){
        if(start==NULL || start->next==NULL){
            return start;
        }
        ListNode* newstart=reverse(start->next);
        ListNode* front=start->next;
        front->next=start;
        start->next=NULL;
        return newstart;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* s=head;
        ListNode* f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode* start=s->next;
        s->next=NULL;
        ListNode* a=head;
        ListNode* b=reverse(start);
        while(b!=NULL){
            ListNode* nextA=a->next;
            ListNode* nextB=b->next;
            a->next=b;
            b->next=nextA;
            a=nextA;
            b=nextB;
        }
        
    }
};