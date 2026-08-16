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
        if(head->next==NULL && n==1) return NULL;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* temp1=head;
        ListNode* prev=head;
        int seccount=0;
        while(temp1!=NULL){
            seccount++;
            if(seccount==(count-n)){
               prev=temp1;
               break;
            }
            temp1=temp1->next;
        }
        if (n == count) {
            head = head->next;
            delete temp1;
            return head;
        }
        temp1=prev->next;
        prev->next=temp1->next;
        delete temp1;
        return head;
    }
};