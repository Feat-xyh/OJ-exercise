/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *first = head;
        ListNode *second = head;
        for (int i=0; i < k; i++) {
            if(first == NULL) {
                return NULL;
            }
            first = first->next;
        }
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        return second;
    }
};