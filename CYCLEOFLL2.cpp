class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * ansf=NULL;bool ans=true;
        ListNode * fast=head;
        ListNode * slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                 ans=false;
                  break;
            }
       } 
       if(ans)return ansf;
       slow=head;
       while(!ans && fast->val!=slow->val){
            fast=fast->next;
            slow=slow->next;
       }
      return fast;
    }
};
