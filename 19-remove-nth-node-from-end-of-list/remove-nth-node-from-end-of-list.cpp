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
        int cnt=0;
        ListNode* current=head;
        ListNode* previous=nullptr;
        if(answer==1){
            head=head->next;
            return head;
        }
        while(current!=NULL){
            cnt++;
            if(cnt==answer){
                previous->next=previous->next->next;
                break;
            }
            previous=current;
            current=current->next;
        }
        return head;
    }
};