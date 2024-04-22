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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        int first=0;
        int second=0;

        while(temp!=NULL && temp->next!=NULL){
            first=temp->val;
            second=temp->next->val;
            int answer=__gcd(first,second);
            ListNode* current=new ListNode(answer);
            current->next=temp->next;
            temp->next=current;
            
            temp=temp->next->next;
        }
        return head;
    }
};