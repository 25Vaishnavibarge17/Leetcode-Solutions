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
    int length(ListNode*head){
         int len=0;
         ListNode*temp=head;
         while(temp!=NULL){
             temp=temp->next;
             len++;
         }
         return len;
    }

    ListNode* solve(ListNode* head, int k,int len) {
        if(len<k)
        {
            return head;
        }
        int cnt=0;
        ListNode*prev=NULL,*nxt=NULL,*curr=head;
        while(cnt<k && curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            cnt++;
        }

        if(nxt!=NULL)
        {
            head->next=solve(nxt,k,len-k);
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int len=length(head);
        return solve(head,k,len);
    }
};
