#include<bits/stdc++.h>

using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode(): val(0), next(nullptr){}
  ListNode(int x): val(x), next(nullptr){}
  ListNode(int x, ListNode* next): val(x), next(nullptr){}
};

int main(){
  ListNode* head = new ListNode();
  head->val = 10;
  // insert value last node in link list
  ListNode* newNode = new ListNode(11);
  head->next = newNode;

  // Agian value last node insert
  ListNode* newNode2 = new ListNode(12);
  ListNode* tem2 = head;
  tem2 = tem2->next;
  tem2->next = newNode2;

  // value Insert first Node
  ListNode* newNode3 = new ListNode(8);
  ListNode* tem3 = head;
  newNode3->next = tem3;
  head = newNode3;

  // insert value 3 position
  // not work position 1
  int pos = 3;
  int j = 0;
  ListNode* tem4 = head;
  while(tem4 != nullptr){
    j++;
    if(j == pos-1){
      ListNode* newNode4 = new ListNode(5);
      newNode4->next = tem4->next;
      tem4->next = newNode4;
      break;
    }
    tem4 = tem4->next;
  }
  //ListNode* first = new ListNode(9, head);

  ListNode* tem = head;
  while(tem != nullptr){
    cout << tem->val << " ";
    tem = tem->next;
  }
  return 0;
}
