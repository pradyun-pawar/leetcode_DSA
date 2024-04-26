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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* current=temp->next;
        queue<int> q1;
        queue<int> q2;
        while(current!=NULL && current->next!=NULL){
            q1.push(temp->val);
            q2.push(current->val);
            temp=temp->next->next;
            current=current->next->next;
        }
        if(temp!=NULL){
            q1.push(temp->val);
        }
        temp=head;
        while(q1.size()!=0){
            temp->val=q1.front();
            q1.pop();
            temp=temp->next;
        }
        while(q2.size()!=0){
            temp->val=q2.front();
            q2.pop();
            temp=temp->next;
        }
        return head;
    }
};