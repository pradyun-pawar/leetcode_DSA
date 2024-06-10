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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL || left == right)
            return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* previous = dummy;
        
        for (int i = 1; i < left; ++i) {
            previous = previous->next;
        }

        ListNode* current = previous->next;
        ListNode* next = current->next;

        for (int i = 0; i < right - left; ++i) {
            current->next = next->next;
            next->next = previous->next;
            previous->next = next;
            next = current->next;
        }

        return dummy->next;
    }
};
