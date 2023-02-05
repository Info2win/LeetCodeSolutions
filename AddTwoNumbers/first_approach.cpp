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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode();
        ListNode *current = dummy;
        int carry = 0;
        int val1,val2,pushVal;

        while (l1 || l2 || carry){
            // get values
            if(l1) val1 = l1->val;
            else val1 =0;
            if(l2) val2 = l2->val;
            else val2 =0;
            // new digit
            pushVal = val1+val2+carry;
            if(pushVal > 9){
                pushVal = pushVal%10;
                carry = 1;
            }
            else carry = 0;
            current->next = new ListNode(pushVal);
            // update pointers
            current = current->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return dummy->next;
    }
};