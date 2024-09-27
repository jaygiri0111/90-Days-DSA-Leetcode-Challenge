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
    ListNode* getMiddle(ListNode*&head,ListNode*&middleprev)
    {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!= NULL)
        {
            fast = fast->next;
            if(fast!=NULL)
            {
                fast = fast->next;
                middleprev = slow;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* Reverse(ListNode*&curr, ListNode*&prev)
    {
        ListNode* forward;
        while(curr!=NULL)
        {
            forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward; 
        }
        return prev;

    }

    bool isPalindrome(ListNode* head) {
        
        if(head==NULL)
        {
            //LL is empty
            return true;
        }
        if(head->next == NULL)
        {
            //single node in LL
            return true;
        }
        
        //Traversing the  ll and breaking in 2 halves
        ListNode* firsthead = head;
        ListNode* middleprev = NULL;
        ListNode* middlenode = getMiddle(firsthead,middleprev);
        //Breaking the ll 
        middleprev->next = NULL;

        //Reversing the ll
        ListNode * curr = middlenode;
        ListNode* prev = NULL;
        ListNode* secondhead = Reverse(curr, prev);

        //Comparison 
        ListNode* temphead1 = firsthead;
        ListNode* temphead2 = secondhead;

        while(temphead1!=NULL)
        {
            if(temphead1->val != temphead2->val)
            {
                return false;
            }
            else
            {
                temphead1 = temphead1->next;
                temphead2 = temphead2->next;
            }
        }
        return true;
    }
};