/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* result = head;

    while(result != NULL && result->next != NULL){
         if (result->val == result->next->val) {
            result->next = result->next->next;
        } else {
            result = result->next;
        }
    }

    return head;
}
