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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        int counter=0;
        int finder=0;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        int rating=k%counter;
        if(rating == 0) return head;
        temp=head;
        rating=counter-rating;
        while(temp!=NULL){
            finder++;
            if(finder==rating) break;
            temp=temp->next;
        }
        ListNode* current=temp->next;
        temp->next=nullptr;
        ListNode* temp2=current;
        while(temp2->next!=nullptr){
            temp2=temp2->next;
        }
        temp2->next=head;
        return current;
    }
};