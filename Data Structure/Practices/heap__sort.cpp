#include<bits/stdc++.h>

using namespace std;

const int lim = 1e2;

int tree[lim], top = 1;

void insert_heap(int tree[], int value)
{
    if(top == 1)
    {
        tree[1] = value;
        ++top;
        return;
    }
    tree[top++] = value;
    int i = top - 1;
    if(i % 2 == 0)
    {
        while(tree[i] > tree[i/2])
        {
            swap(tree[i], tree[i/2]);
            i--;
        }
    }
    else
    {
        while(tree[i] > tree[i/2])
        {
            swap(tree[i], tree[i/2]);
            i--;
        }
    }
}

int main()
{
    insert_heap(tree, 3);
    insert_heap(tree, 5);
    insert_heap(tree, 8);
    insert_heap(tree, 9);
    for(int i = 1; i < top; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;
    return 0;
}
