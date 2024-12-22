/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isMirror(struct TreeNode* T1, struct TreeNode* T2) {
    if (T1 == NULL && T2 == NULL) return true;

    if (T1 == NULL || T2 == NULL) return false;

    if (T1->val != T2->val) return false;

    return isMirror(T1->left, T2->right) && isMirror(T1->right, T2->left);
}
bool isSymmetric(struct TreeNode* root) {
    return isMirror(root->left, root->right);
}
