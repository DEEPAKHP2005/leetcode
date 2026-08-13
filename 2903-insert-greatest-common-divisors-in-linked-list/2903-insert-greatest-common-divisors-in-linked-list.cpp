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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=temp1->next;
        while(temp2!=NULL){
             int cd=gcd(temp1->val,temp2->val);
             ListNode* dummy=new ListNode(cd);
             temp1->next=dummy;
             dummy->next=temp2;
             temp1=temp2;
             temp2=temp2->next;
        }
        return head;
    }
};