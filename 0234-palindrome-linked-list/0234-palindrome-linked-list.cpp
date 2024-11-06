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
    ListNode* getmiddle(ListNode* head, ListNode*& middleNodeprev) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                fast = fast->next;
                middleNodeprev = slow;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* reversell(ListNode* curr, ListNode* prev) {
        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // Traverse till middle node and break it into 2 part
        ListNode* firstHalfHead = head;
        ListNode* middleNodeprev = NULL;
        ListNode* middlenode = getmiddle(head, middleNodeprev);

        // break the LL
        if(middleNodeprev!=NULL)
         middleNodeprev->next = NULL;

        // reverse the half part;
        ListNode* prev = NULL;
        ListNode* curr = middlenode;
        ListNode* secondHalfHead = reversell(curr, prev);

        // compare the both half and decide T/f;
        // comparison hamesa first half ke hisab ke karenge
        // KYUKI odd wale case mae first half ki lengt second half se kam hoga
        // and even case mae dono half equal rahega
        ListNode* temphead1 = firstHalfHead;
        ListNode* temphead2 = secondHalfHead;
        while (temphead1 != NULL) {
            if (temphead1->val != temphead2->val) {
                return false;
            } else {
                temphead1 = temphead1->next;
                temphead2 = temphead2->next;
            }
        }
        return true;
    }
};