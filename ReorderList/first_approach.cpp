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
    void reorderList(ListNode* head) {
        // find middle
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reverse the second half
        ListNode *second = slow->next;
        slow->next = nullptr; // end of the first half
        ListNode *prev = nullptr;
        ListNode *temp = nullptr;
        while(second){
            temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }
        //merge two halfs
        ListNode *first = head;
        second = prev;
        ListNode *temp1, *temp2;
        while(second){
            temp1 = first->next;
            temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};