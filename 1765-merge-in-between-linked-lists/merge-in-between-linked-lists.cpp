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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL) return list1;
        ListNode* temp=list1;
        ListNode* temp2=list1;
        ListNode* end=list2;
        int counter=0;
        int counter2=-1;

        while(end->next!=nullptr){
            end=end->next;
        }
        while(temp!=NULL){
            counter++;
            if(counter==a){
                break;
            }
            temp=temp->next;
        }
        if(temp==nullptr) return NULL;
        while(temp2!=NULL){
            counter2++;
            if(counter2==b){
                break;
            }
            temp2=temp2->next;
        }
        if(temp2==nullptr) return NULL;
        temp->next=list2;
        end->next=temp2->next;
        return list1;
    }
};