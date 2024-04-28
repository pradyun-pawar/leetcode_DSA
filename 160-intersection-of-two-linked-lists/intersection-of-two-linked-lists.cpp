/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int length1 = 0;
        int length2 = 0;
        int diff = 0;
        int counter = 0;
        while (temp1 != NULL) {
            length1++;
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            length2++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        if (length1 < length2) {
            diff = length2 - length1;
            while (counter != diff) {
                counter++;
                temp2 = temp2->next;
            }
        } else if (length1 > length2) {
            diff = length1 - length2;
            while (counter != diff) {
                counter++;
                temp1 = temp1->next;
            }
        }
        while (temp1 != NULL) {
            if (temp1 == temp2)
                return temp1;
            else {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return NULL;
    }
};