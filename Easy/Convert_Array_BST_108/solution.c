/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* oxy(int* nums, int numsSize, int start, int end) {

    if (start > end) {
        return NULL;
    }
    
    int m = start + (end - start) / 2;
    
    struct TreeNode* head = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    head->val = nums[m];
    
    head->left = oxy(nums, numsSize, start, m - 1);
    head->right = oxy(nums, numsSize, m + 1, end);
    
    return head;

}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(nums == NULL)
        return NULL;
    
    return oxy(nums, numsSize, 0, numsSize - 1);
}
