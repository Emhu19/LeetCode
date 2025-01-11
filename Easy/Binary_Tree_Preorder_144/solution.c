/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* array = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;

    void dfs(struct TreeNode* node) {
        if (node == NULL) return;
        array[*returnSize] = node->val;
        (*returnSize)++;
        dfs(node->left);
        dfs(node->right);
    }

    dfs(root);
    return array;
}
