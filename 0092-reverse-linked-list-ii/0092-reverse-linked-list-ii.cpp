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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*start=NULL;
         ListNode*before=NULL;
        int pos=1;
        while(pos<left-1){
            curr=curr->next;
            pos++;
        }
        if(left == 1) {
    start = head;
    curr = head;
}
else {
    before = curr;
    curr = curr->next;
    start = curr;
    pos++;
}
        while(pos<=right){
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
             pos++;
           
        }
        if(left == 1) {
    head = prev;
}
else {
    before->next = prev;
}
        start->next = curr;
return head;
        

    }
};