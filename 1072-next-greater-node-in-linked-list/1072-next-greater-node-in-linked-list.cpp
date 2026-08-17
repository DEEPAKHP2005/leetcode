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
// ListNode* reverse(ListNode* head){
//     ListNode* temp=head;
//     ListNode* prev=nullptr;
//     while(temp!=NULL){
//         ListNode* front=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=front;
//     }
//     return prev;
// }

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        if(head==nullptr || head->next==nullptr) return {0};
        // ListNode* newhead=reverse(head);
        ListNode* temp=head;
        while (temp != nullptr) {

            ListNode* curr = temp->next;
            int greater = 0;

            while (curr != nullptr) {
                if (curr->val > temp->val) {
                    greater = curr->val;
                    break;
                }

                curr = curr->next;
            }

            arr.push_back(greater);

            temp = temp->next;
        }

        return arr;
    }
};