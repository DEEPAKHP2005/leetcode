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
        ListNode* temp=head;
        int count=0;
        int fstk=0;
        int seck=0;
        ListNode* temp2=head;
        while(temp!=NULL){
            count++;
            if(count==k){
                fstk=temp->val;
                temp2=temp;
            }
            temp=temp->next;
        }
        ListNode* temp3=head;
        int newcount=0;
        while(temp3!=NULL){
            newcount++;
            if(newcount==(count-k+1)){
                seck=temp3->val;
                break;
            }
            temp3=temp3->next;
        }
        temp3->val=fstk;
        temp2->val=seck;
        return head;
    }
};