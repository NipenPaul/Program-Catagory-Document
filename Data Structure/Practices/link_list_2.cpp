#include<bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node *create_node(int item, Node *next)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

int main()
{
    Node *n;
    n = create_node(100, NULL);
    printf("%d", n->data);
    return 0;
}
