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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list2;
        while(temp->next!=NULL){
             temp=temp->next;
        }
        ListNode* temp1=list1;
        int count=0;
        while(temp1!=NULL){
            ListNode* front=temp1->next;
            count++;
            if(count==a){
                temp1->next=list2;
            }
            if(count==b+1){
               temp->next=front;
            }
            temp1=front;
        }
        return list1;
    }
};