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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tem = head;
        ListNode* left;
        for(int i = 0; i < k; i++){
            left = tem;
            tem = tem->next;
        }
        tem = head;
        int n = 0;
        while(tem != nullptr){
            tem = tem->next;
            n++;
        }
        tem = head;
        ListNode* right;
        for(int i = 0; i < n; i++){
            if(n-i == k){
                right = tem;
                break;
            }
            tem = tem->next;
        }
        int temval = left->val;
        left->val = right->val;
        right->val = temval;
        return head;
    }
};
