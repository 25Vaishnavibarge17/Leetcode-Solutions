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
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        heightoftree(root,d);
        return d;
    }
private:
    int heightoftree(TreeNode* node,int &d)
    {
        if(node==NULL)
            return 0;
        int lh=heightoftree(node->left,d);
        int rh=heightoftree(node->right,d);
        d=max(d,lh+rh);
        return 1+max(lh,rh);      
    }
};
