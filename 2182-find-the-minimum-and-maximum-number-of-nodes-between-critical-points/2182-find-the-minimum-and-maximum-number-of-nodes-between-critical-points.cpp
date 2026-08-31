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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* current=head->next;
        ListNode* prev=head;
        int count=1;
        int first=-1;
        int pre=-1;
        int minDis=INT_MAX;
        int maxDis=-1;
        while(current->next!=nullptr){
            count++;
            bool critical = (current->val > prev->val && current->val > current->next->val) || (current->val < prev->val && current->val < current->next->val);
            if(critical){
                if(first==-1){
                    first=count;
                }
                else{
                    minDis=min(minDis, count-pre);
                    maxDis=max(maxDis, count-first);
                }
                pre=count;

            }
            prev=current;
            current=current->next;

        }
        if (first == -1 || first == pre) { return {-1, -1}; }
        return {minDis,maxDis};
    }
};