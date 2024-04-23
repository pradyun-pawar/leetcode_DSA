class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy=new ListNode();
        ListNode* current=dummy;
        int sum=0;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL || carry!=0){
            sum=0;
            if(carry==1){
                sum=sum+1;
                carry=0;
            }
            if(temp1!=NULL){
                sum=sum+temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL){
                sum=sum+temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            sum=sum%10;
            current->next=new ListNode(sum);
            current=current->next;
        }
        return dummy->next;
    }
};
