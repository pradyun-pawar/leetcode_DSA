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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* temp1=head;
        ListNode* temp2=head;
        int counter=0;

        while(temp1!=NULL){
            counter++;
            temp1=temp1->next;
        }
        temp1=head;
        if(counter%2==0){
            while(temp2->next->next!=NULL){
                temp1=temp1->next;
                temp2=temp2->next->next;
            }
            ListNode* after=temp1->next;
            temp1->next=nullptr;
            temp1=head;
            ListNode* previous=new ListNode(0,after);
            temp2=after->next;
            while(after->next!=NULL){
                after->next=temp2->next;
                temp2->next=previous->next;
                previous->next=temp2;
                temp2=after->next;
            }
            previous=previous->next;
            after=previous->next;
            ListNode* after2= temp1->next;
            while(after2!=NULL && after!=NULL){
                temp1->next=previous;
                previous->next=after2;
                temp1=after2;
                after2=after2->next;
                previous=after;
                after=after->next;
                
            }
            if(after2==NULL){
                temp1->next=previous;
            }
        }
        else{
            while(temp2->next!=NULL){
                temp1=temp1->next;
                temp2=temp2->next->next;
            }
            ListNode* after=temp1->next;
            temp1->next=nullptr;
            temp1=head;
            ListNode* previous=new ListNode(0,after);
            temp2=after->next;
            while(after->next!=NULL){
                after->next=temp2->next;
                temp2->next=previous->next;
                previous->next=temp2;
                temp2=after->next;
            }
            previous=previous->next;
            after=previous->next;
            ListNode* after2= temp1->next;
            while(after2!=NULL && after!=NULL){
                temp1->next=previous;
                previous->next=after2;
                temp1=after2;
                after2=after2->next;
                previous=after;
                after=after->next;
                
            }
            if(after==NULL){
                temp1->next=previous;
                previous->next=after2;
            }
        }       
    }
};