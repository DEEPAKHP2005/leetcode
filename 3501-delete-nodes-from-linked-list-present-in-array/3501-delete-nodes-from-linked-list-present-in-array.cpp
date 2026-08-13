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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        while(head != NULL && st.count(head->val) > 0) {
            head=head->next;
        }
        if(head == NULL)
         return head;
        ListNode* temp=head->next;
        ListNode* prev=head;
        while(temp!=NULL){
        ListNode* front=temp->next;
            if(st.count(temp->val)>0){
                prev->next=front;
                temp=front;
            }
            else {
                prev=temp;
                temp=front;
            }
        }
        return head;
    }
};