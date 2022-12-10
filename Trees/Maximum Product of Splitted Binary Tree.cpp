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

    long long int mod=1e9+7;
    long long totalSum,maxp=0;

    int findSum(TreeNode*root)
    {
        if(!root)
         return 0;
        long long sum=findSum(root->left)+findSum(root->right)+root->val;
        maxp=max(maxp,(totalSum-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        totalSum=findSum(root);
        findSum(root);
        return maxp%mod;
    }
};
