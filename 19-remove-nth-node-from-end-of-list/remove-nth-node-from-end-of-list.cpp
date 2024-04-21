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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int counter=0;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        int answer=counter-n+1;
        counter=0;
        temp=head;
        ListNode* previous=nullptr;
        if(answer==1){
            head=head->next;
            return head;
        }
        while(temp!=NULL){
            counter++;
            if(counter==answer){
                previous->next=previous->next->next;
                break;
            }
            previous=temp;
            temp=temp->next;
        }
        return head;
    }
};