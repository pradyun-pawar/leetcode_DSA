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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return head;
        int data=temp->val;
        ListNode* previous=temp;
        temp=temp->next;
        while(temp!=NULL){
            if(data==temp->val){
                previous->next=temp->next;
                delete temp;
                temp=previous->next;
            }
            else{
                data=temp->val;
                previous=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};