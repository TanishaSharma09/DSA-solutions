
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    
            ListNode*curr=head;
            ListNode*prv = NULL;
            ListNode*post = NULL;
            while(curr!=NULL){
                post = curr->next;
                curr->next=prv;
                prv=curr;
                curr=post;
            }
            return prv;
           
           
    }
};