/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_map<ListNode*, bool>mpp;
//         ListNode* temp = head;

//         while(temp!=NULL){
//             if(mpp[temp]==true)
//             {
//                 return true;
//             }
//             else
//             {
//                 mpp[temp] = true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL)
        {
            fast = fast->next;
            if(fast!=NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast) return true;
        }
        return false;
    }
};