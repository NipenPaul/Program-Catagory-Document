#include<stdio.h>
#include<malloc.h>

struct node{
    int item;
    struct node *next;
};

struct node *create_node(int item, struct node *next)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->item = item;
    new_node->next = next;

    return new_node;
};
int main()
{
    struct node *n;
    n = create_node(5, NULL);
    printf("%d", n->item);

    return 0;
}
