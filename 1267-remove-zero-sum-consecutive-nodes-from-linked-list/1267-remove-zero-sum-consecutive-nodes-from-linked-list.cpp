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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(sum==0){
                arr.erase(arr.begin()+i,arr.begin()+(j+1));
                i--;
                break;
            }
            }

        }
        ListNode* dummy = new ListNode(0);
        ListNode* temp3 = dummy;
        for(int x : arr) {
          temp3->next = new ListNode(x);
          temp3 = temp3->next;
        }

return dummy->next;
    }
};