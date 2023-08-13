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
    ListNode* doubleIt(ListNode* head) {
        vector<int> v;
        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        vector<int> tem;
        int c = 0;
        for(int i = v.size()-1; i >= 0; i--){
            int x = v[i];
            int d = (x*2)+c;
            tem.push_back(d % 10);
            c = d / 10;
        }
        if(c != 0)
            tem.push_back(c);
        ListNode* ans = nullptr;
        for(int &x: tem){
            ListNode* node = new ListNode(x);
            if(ans == nullptr){
                ans = node;
            }else{
                node->next = ans;
                ans = node;
            }
        }
        return ans;
    }
};
