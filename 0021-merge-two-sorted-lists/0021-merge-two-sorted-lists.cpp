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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1== NULL && list2==NULL) return NULL;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode dummy(0);
        ListNode* pointer=&dummy;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                pointer->next=temp1;
                pointer=pointer->next;
                temp1=temp1->next;
            }
            else {
                pointer->next=temp2;
                pointer=pointer->next;
                temp2=temp2->next;
            }
        }
        while(temp1){
            pointer->next=temp1;
            pointer=pointer->next;
            temp1=temp1->next;
        }
        while(temp2){
            pointer->next=temp2;
            pointer=pointer->next;
            temp2=temp2->next;
        }
        return dummy.next;
    }
};