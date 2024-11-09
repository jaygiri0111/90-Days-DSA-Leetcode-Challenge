/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Approach - 01(Using HashMap)
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//      unordered_map<ListNode*, bool>mpp;
//      ListNode* temp = head;
//      while(temp!=NULL)
//      {
//         if(mpp[temp]==true)
//         {
//           return temp;
//         }
//         else
//         {
//             mpp[temp]= true;
//         }
//         temp=temp->next;
//      }
//     return nullptr;
//     }

// };

// Apporach-02(Using slow and fast pointer)
ListNode* hascycle(ListNode* head) {
    ListNode*slow = head;
    ListNode*fast = head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if(slow==fast)
        {
            return fast;
        }
    }
    return nullptr;
}

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode*loopdetected = hascycle(head);
        if(loopdetected==NULL)
        {
            return nullptr;
        }
        ListNode*slow = head;
        while(slow!=loopdetected)
        {
            slow=slow->next;
            loopdetected = loopdetected->next;
        }
        return slow;
    }
};