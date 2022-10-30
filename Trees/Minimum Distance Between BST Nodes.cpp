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
    void traversal(TreeNode* root,vector<int>& v)
    {
        if(!root)
            return ;
        traversal(root->left,v);         //----------
        v.push_back(root->val);          //---Inorder traversal
        traversal(root->right,v);        //----
    }
    
    int minDiffInBST(TreeNode* root) 
    {
    vector<int> v;
    traversal(root,v);
    sort(v.begin(),v.end());
        int ans=INT_MAX;
    for(int i=0;i<v.size()-1;i++)
    {
        ans=min(ans,abs(v[i]-v[i+1]));
    }
        
          return ans;
    }
};
