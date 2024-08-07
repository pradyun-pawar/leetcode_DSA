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
    ListNode* swapPairs(ListNode* head) {
        // Base cases: if the list is empty or has only one node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // New head will be the second node
        ListNode* newHead = head->next;

        // Initialize pointers
        ListNode* prev = nullptr;
        ListNode* curr = head;

        // Loop through the list in pairs
        while (curr != nullptr && curr->next != nullptr) {
            ListNode* nextPair = curr->next->next; // The start of the next pair
            ListNode* second = curr->next; // The second node of the current pair

            // Swap the current pair
            second->next = curr;
            curr->next = nextPair;
            if (prev != nullptr) {
                prev->next = second;
            }

            // Move pointers forward
            prev = curr;
            curr = nextPair;
        }

        return newHead;
    }
};
