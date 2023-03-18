#include <iostream>
using namespace std;
int binarysrch(int n)
{
  
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    int squr = mid * mid;
   while(s<=e)
    {
        if (squr == n)
        {
            return mid;
        }
        else if (squr > n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main()

{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<binarysrch(n);
}