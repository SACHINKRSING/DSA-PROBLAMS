#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int val = 5;

    int arry[size];
    for (int i = 0; i < size; i++)
    {
        arry[i]=val;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arry[i]<<" ";
    }
    return 0;
}