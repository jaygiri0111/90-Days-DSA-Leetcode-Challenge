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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = head;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        while (prev != NULL && prev->next!=NULL) {
             ListNode* temp = prev->next;
            if (prev->val == temp->val) {
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
            }
            else
            {
            prev = prev->next;

            }
        }
        return head;
    }
};