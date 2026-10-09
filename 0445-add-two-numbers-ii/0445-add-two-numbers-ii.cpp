class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newl1 = reverse(l1);
        ListNode* newl2 = reverse(l2);

        ListNode dummy(0);
        ListNode* temp = &dummy;

        int carry = 0;

        while (newl1 != NULL || newl2 != NULL || carry != 0) {
            int sum = carry;

            if (newl1 != NULL) {
                sum += newl1->val;
                newl1 = newl1->next;
            }

            if (newl2 != NULL) {
                sum += newl2->val;
                newl2 = newl2->next;
            }

            carry = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);
            temp->next = newNode;
            temp = newNode;
        }

        return reverse(dummy.next);
    }
};