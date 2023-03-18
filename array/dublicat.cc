#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void uniqe(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
    for (int i=0;i<n;i++){
        ans=ans^i;
    }
   
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    print(arr, n);
    uniqe(arr, n);
}
