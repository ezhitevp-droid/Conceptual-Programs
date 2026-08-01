/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node = head;
        ListNode* ptr = head;
        int k = 0;
        while (ptr != nullptr) {
            k++;
            ptr = ptr->next;
        }
        n = k - n + 1;
        if (n == 1) return head->next;
        for (int i = 1; i < n - 1; i++) {
            node = node->next;
        }
        node->next = node->next->next;
        return head;
    }
};