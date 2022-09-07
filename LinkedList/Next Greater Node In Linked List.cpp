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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode*ptr1=head,*ptr2=NULL;
        vector<int>ans;
        while(ptr1->next!=NULL)
        {
          ptr2=ptr1->next;
          if(ptr2!=NULL)
          {
             while(ptr2!=NULL&& ptr1->val>=ptr2->val)
             {
               ptr2=ptr2->next;
             }
             if(ptr2==NULL)
             {
               ans.push_back(0);
             }
             else
             {
               ans.push_back(ptr2->val);
             }
          }
          ptr1=ptr1->next;
      }
      ans.push_back(0);
      return ans;
    }
    
};
