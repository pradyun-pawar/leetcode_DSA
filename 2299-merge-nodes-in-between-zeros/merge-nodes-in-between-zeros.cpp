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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        if(head->next->val==0 && head->next->next==NULL) return NULL;
        ListNode* temp=head->next;
        ListNode* newhead=new ListNode();
        ListNode* temp2=newhead;
        int data=0;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode* newNode=new ListNode(data);
                temp2->next=newNode;
                temp2=newNode;
                data=0;
            }
            data=data+temp->val;
            temp=temp->next;
        }
        return newhead->next;
    }
};