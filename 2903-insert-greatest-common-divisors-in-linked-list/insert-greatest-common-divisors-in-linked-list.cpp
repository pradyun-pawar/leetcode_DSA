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
        ListNode* previous=head;
        int first=0;
        int second=0;
        int counter=0;
        while(temp!=NULL){
            counter++;
            if(counter>1){
                first=temp->val;
                second=previous->val;
                int answer=__gcd(first,second);
                ListNode* current=new ListNode(answer);
                current->next=temp;
                previous->next=current;
                previous=previous->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};