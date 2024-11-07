/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Approach - 01 (Hash Map)
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_map<ListNode*, bool>mpp;
//         ListNode* temp = head;
//         while(temp!=NULL)
//         {
//             if(mpp[temp]==true)
//             {
//                 return true;
//             }
//             else
//             {
//                 mpp[temp]=true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }
// };

// Approach - 02 (Slow - Fast Pointr)
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};