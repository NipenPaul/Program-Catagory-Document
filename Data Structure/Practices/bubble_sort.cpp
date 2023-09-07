#include<iostream>

using namespace std;

template<class T>
void bubble_sort(T data[], int n)
{
    for(int k = 0; k < n - 1; k++)
    {
        int ptr = 0;
        while(ptr <= n - k)
        {
            if(data[ptr] > data[ptr+1])
            {
                T tem = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = tem;
            }
            ptr++;
        }
    }
}

int main()
{
    int data[] = {4,5,1,2,3,4,2,3,6};
    bubble_sort(data, 9);
    for(int i = 0; i < 9; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;

    char ch[] = "abcab";
    bubble_sort(ch, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
    return 0;
}
