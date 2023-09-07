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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* head2 = nullptr;
        ListNode* tail = nullptr;
        ListNode* rev = nullptr;
        ListNode* tem = head;
        int i = 1;
        bool ok = false;
        while(tem){
            ListNode* newNode = new ListNode(tem->val);
            if(head2 == nullptr){
                head2 = tail = newNode;
                if(left <= i && right >= i){
                    rev = tail;
                    ok = true;
                }
            }else if(left <= i && right >= i){
                if(rev == nullptr){
                    rev = tail;
                    tail->next = newNode;
                    tail = newNode;
                }else if(ok){
                    newNode->next = rev;
                    rev = newNode;
                }else{
                    newNode->next = rev->next;
                    rev->next = newNode;
                }
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            tem = tem->next;
            i++;
        }
        if(ok) return rev;
        return head2;
    }
};
