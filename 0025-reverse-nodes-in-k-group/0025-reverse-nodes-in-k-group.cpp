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
    int getlength(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return head;
        }
        if (head->next == NULL) {
            return head;
        }
        int len = getlength(head);
        if (len < k) {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;
        while (pos < k) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            pos++;
        }
        if (curr != NULL) {
            ListNode* recursionkaHead = reverseKGroup(curr, k);
            head->next = recursionkaHead;
        }
        return prev;
    }
};