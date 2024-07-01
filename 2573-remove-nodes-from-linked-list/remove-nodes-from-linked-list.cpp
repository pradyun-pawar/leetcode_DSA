class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* current=head;
        ListNode* nothing= nullptr;
        stack<ListNode*> st;

        while(current!=NULL){
            while(!st.empty() && st.top()->val < current->val){
                st.pop();
            }
            st.push(current);
            current=current->next;
        }
        while(!st.empty()){
            current=st.top();
            st.pop();
            current->next=nothing;
            nothing=current;
        }
        return current;
    }
};