#include<bits/stdc++.h>

using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode* prev;
  ListNode(): val(0), next(nullptr), prev(nullptr){}
  ListNode(int x): val(x), next(nullptr), prev(nullptr){}
};

void HeadShow(ListNode* head){
  cout << "Head: ";
  ListNode* tem = head;
  while(tem != nullptr){
    cout << tem->val << " ";
    tem = tem->next;
  }
  cout << endl;
}

void TailShow(ListNode* tail){
  cout << "Tail: ";
  ListNode* tem = tail;
  while(tem != nullptr){
    cout << tem->val << " ";
    tem = tem->prev;
  }
}

void insertFirst(ListNode* &head, ListNode* &tail, int x){
  ListNode* newNode = new ListNode(x);
  if(head == nullptr){
    head = newNode;
    tail = head;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;

}
void insertLast(ListNode *&head, ListNode *&tail, int x){
  ListNode* newNode = new ListNode(x);
  if(tail == nullptr){
    tail = newNode;
    head = tail;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}
void deleteFirst(ListNode* &head, ListNode* &tail){
  if(head == nullptr) return;
  ListNode* tem = head;
  if(head->next == NULL){
    head = nullptr;
    tail = head;
    return;
  }
  head = head->next;
  head->prev = nullptr;
  delete(tem);
}
void deleteLast(ListNode* &head, ListNode* &tail){
  if(tail == nullptr) return;
  if(tail->prev == NULL){
    tail = nullptr;
    head = tail;
    return;
  }
  ListNode *tem = tail;
  tail = tail->prev;
  tail->next = nullptr;
  free(tem);
}
int main(){
  ListNode *head = nullptr;
  ListNode *tail = head;
  insertFirst(head, tail, 1);
  insertFirst(head, tail, 2);
  insertLast(head, tail, 5);
  insertFirst(head, tail, 3);
  insertLast(head, tail, 4);
  deleteFirst(head, tail);
  deleteFirst(head, tail);
  insertLast(head, tail, 4);
  deleteLast(head, tail);
  HeadShow(head);
  TailShow(tail);
  return 0;
}
