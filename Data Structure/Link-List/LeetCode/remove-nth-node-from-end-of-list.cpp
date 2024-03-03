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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* tem = head;
        while(tem != nullptr){
            sz++;
            tem = tem->next;
        }
        n = sz - n + 1;
        ListNode* ans = nullptr;
        tem = head;
        sz = 0;
        while(tem != nullptr){
            sz++;
            if(n != sz){
                ListNode* newNode = new ListNode(tem->val);
                newNode->next = ans;
                ans = newNode;
            }
            tem = tem->next;
        }
        tem = ans;
        ans = nullptr;
        while(tem != nullptr){
            ListNode* newNode = new ListNode(tem->val);
            newNode->next = ans;
            ans = newNode;
            tem = tem->next;
        }
        return ans;
    }
};