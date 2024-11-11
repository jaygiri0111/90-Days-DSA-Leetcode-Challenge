/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
   Node* solve(Node*head)
   {
    if(!head) return nullptr;
    auto it = head;
    auto tail = it;
    while(it)
    {
        if(it->child)
        {
            auto childtail = solve(it->child);
            auto temp = it->next;
            it ->next = it->child;
            it->next->prev = it;
            childtail->next = temp;
            if(temp) temp->prev = childtail;
            it->child = NULL;
        }
        tail = it;
        it = it->next;
    }
    return tail;
   }
    Node* flatten(Node* head) {
        solve(head);
        return head;
    }
};