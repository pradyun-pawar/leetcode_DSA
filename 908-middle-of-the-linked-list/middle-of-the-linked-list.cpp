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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int count=0;
        int answer=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return head;
        }
        if(count%2==0){
            answer=(count/2)+1;
        }
        else{
            answer=(count+1)/2;
        }
        count=0;
        while(head!=NULL){
            count++;
            if(count==answer){
                return head;
            }
            head=head->next;
        }
        return head;
    }
};