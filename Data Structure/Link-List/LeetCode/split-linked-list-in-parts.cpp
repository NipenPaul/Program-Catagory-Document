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
        vector<ListNode*> vec;
        int n = 0;
        ListNode* tem = head;
        while(tem){
            n++;
            tem = tem->next;
        }
        int sz = n / k;
        int extra = n % k;
        tem = head;
        for(int i = 0; i < k; i++){
            ListNode* first = nullptr;
            ListNode* last = nullptr;
            int l = 0;
            if(extra > 0){
                l = 1;/*  */
                extra--;
            }
            for(int j = 0; j < sz+l; j++){
                ListNode* newNode = new ListNode(tem->val);
                tem = tem->next;
                if(first == nullptr){
                    first = last = newNode;
                }else{
                    last->next = newNode;
                    last = newNode;
                }
            }
            vec.push_back(first);
        }
        return vec;
    }
};
