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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return nullptr;

        while (head && head->val == val) {
            head = head->next;
        }

        ListNode* temp = head;
        ListNode* previous = nullptr;
        while (temp != NULL) {
            if (temp->val == val) {
                ListNode* current = temp;
                if (previous != nullptr) {
                    previous->next = temp->next;
                }
                temp = temp->next;
                delete current;
            } else {
                previous = temp;
                temp = temp->next;
            }
        }
        return head;
            
    }
};