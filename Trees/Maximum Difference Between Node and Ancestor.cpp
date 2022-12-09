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
    int finddiff(TreeNode* root,int minNum,int maxNum)
    {
        if(root==NULL)
        {
            return maxNum-minNum;
        }
        maxNum=max(maxNum,root->val);
        minNum=min(minNum,root->val);

        return max(finddiff(root->left,minNum,maxNum),finddiff(root->right,minNum,maxNum));
    }

    int maxAncestorDiff(TreeNode* root) {
        int minNum=100000,maxNum=0;
        return finddiff(root,minNum,maxNum);
    }
};
