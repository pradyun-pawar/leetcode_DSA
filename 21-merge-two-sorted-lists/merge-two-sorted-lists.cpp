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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ans=new ListNode();
        ListNode* current =ans;
        int first=0;
        int second=0;
        while(temp1!=NULL && temp2!=NULL){
            first=temp1->val;
            second=temp2->val;
            if(first<=second){
                current->next=new ListNode(first);
                current=current->next;
                temp1=temp1->next;
            }
            else{
                current->next=new ListNode(second);
                current=current->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            current->next=new ListNode(temp1->val);
            current=current->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            current->next=new ListNode(temp2->val);
            current=current->next;
            temp2=temp2->next;
        }
        return ans->next;
    }
};