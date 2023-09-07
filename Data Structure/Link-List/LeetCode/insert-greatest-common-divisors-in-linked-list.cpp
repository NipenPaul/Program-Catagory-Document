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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* lst = nullptr;
        vector<int> v;
        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        vector<int> ans;
        for(int i = 0; i < v.size()-1; i++){
            ans.push_back(v[i]);
            ans.push_back(gcd(v[i], v[i+1]));
        }
        ans.push_back(v[v.size()-1]);
        for(int i = ans.size()-1; i >= 0; i--){
            int x = ans[i];
            ListNode* tem = new ListNode(x);
            if(lst == nullptr){
                lst = tem;
            }else{
                tem->next = lst;
                lst = tem;
             }
        }
        return lst;
    }
};
