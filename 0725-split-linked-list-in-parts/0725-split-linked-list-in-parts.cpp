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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int N = 0;
        auto it = head;
        // length of LL
        while (it) {
            N++;
            it = it->next;
        }
        // Part sizen of bucket
        int partsize = N / k;
        // Extra node
        int extranode = N % k;
        vector<ListNode*> ans(k, nullptr);
        it = head;
        for (int i = 0; i < k && it; i++) {
             ans[i] = it;
            int currentnodesize = partsize + (extranode-- > 0 ? 1 : 0);
            for (int j = 0; j < currentnodesize - 1; j++) {
                it = it->next;
            }
            auto nextpartstarting = it->next;
            it->next = NULL;
            it = nextpartstarting;
        }
        return ans;
    }
};