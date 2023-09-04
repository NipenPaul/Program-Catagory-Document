/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* tortoise = head;
        ListNode* hare = head;
        while(hare){
            if(hare->next && hare->next->next){
                hare = hare->next->next;
            }else return false;
            tortoise = tortoise->next;
            if(hare == tortoise) return true;
        }
        return false;
    }
};
