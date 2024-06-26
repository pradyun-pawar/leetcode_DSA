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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        vector<int> storage;
        while(temp!=NULL){
            storage.push_back(temp->val);
            temp=temp->next;
        }
        sort(storage.begin(),storage.end());
        temp=head;
        for(int i=0;i<storage.size();i++){
            temp->val=storage[i];
            temp=temp->next;
        }
        return head;
    }
};