/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        if(root==NULL)
        {
            return ans;
        }
        while(!q.empty())
        {
          int size=q.size();
          if(size==0) return ans;
          cnt++;
          vector<int>temp;
          while(size>0)
           {
            TreeNode* ntp=q.front();
            q.pop();
            temp.push_back(ntp->val);
            if(ntp->left)
            {
                q.push(ntp->left);
            }
            if(ntp->right)
            {
                q.push(ntp->right);
            }
            size--;
           }
        if(cnt%2==0)
        {
          reverse(temp.begin(),temp.end());
        }
        ans.push_back(temp);
        }
        return ans; 
    }   
};
