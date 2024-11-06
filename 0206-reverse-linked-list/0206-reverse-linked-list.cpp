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
    ListNode*reversedLL(ListNode*curr, ListNode*prev)
    {
        if(curr==NULL)
        {
            //iska matlab LL reverse ho chuki hai
            // reversed LL  starting Node prev wla pointer hai
            return prev;
        }
        ListNode* forward = curr->next;
        curr->next= prev;
        prev= curr;
        curr = forward;

        return reversedLL(curr,prev);

    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* curr = head;

        ListNode* NewHead = reversedLL(curr,prev);
        return NewHead;
    }
};