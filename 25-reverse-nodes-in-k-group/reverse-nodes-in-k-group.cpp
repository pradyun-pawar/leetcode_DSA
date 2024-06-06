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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head; // Base cases
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;
        ListNode* groupStart = head;
        ListNode* groupEnd = head;
        
        while (true) {
            // Find the end of the current group
            for (int i = 1; i < k && groupEnd != nullptr; ++i) {
                groupEnd = groupEnd->next;
            }
            if (groupEnd == nullptr) break; // Less than k nodes left
            
            ListNode* nextGroupStart = groupEnd->next;
            ListNode* prev = nullptr;
            ListNode* curr = groupStart;
            while (curr != nextGroupStart) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            
            // Connect with the previous part
            prevGroupEnd->next = groupEnd;
            groupStart->next = nextGroupStart;
            
            // Move to the next group
            prevGroupEnd = groupStart;
            groupStart = nextGroupStart;
            groupEnd = groupStart;
        }
        
        return dummy->next;
    }
};
