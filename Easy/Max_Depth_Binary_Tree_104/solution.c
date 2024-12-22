/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    if(root->right == NULL && root->left == NULL)
        return 1;
    if(root->right == NULL)
        return 1 + maxDepth(root->left);
    if(root->left == NULL)
        return 1 + maxDepth(root->right);
    int max1 = 1 + maxDepth(root->left); 
    int max2 = 1 + maxDepth(root->right);
    int max = max1;
    if(max2 > max)
        max = max2;
    return max;
}
