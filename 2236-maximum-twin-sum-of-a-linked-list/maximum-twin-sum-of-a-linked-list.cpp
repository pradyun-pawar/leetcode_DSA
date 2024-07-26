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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        int value=0;
        vector<int> arr;
        int sum=0;
        int result=0;

        while(temp!=NULL){
            n++;
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        value=(n/2)-1;
        for(int i=0;i<=value;i++){
            sum=arr[i]+arr[n-1-i];
            result=max(result,sum);
        }
        return result;
    }
};