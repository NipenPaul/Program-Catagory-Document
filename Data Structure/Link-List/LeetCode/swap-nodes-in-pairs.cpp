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
    ListNode* swapPairs(ListNode* head) {
        ListNode* tem = head;
        while(tem != nullptr){
            ListNode* a = tem;
            tem = tem->next;
            ListNode* b = tem;
            if(b == nullptr) break;
            int temv = a->val;
            a->val = b->val;
            b->val = temv;
            tem = tem->next;
        }
        return head;
    }
};
