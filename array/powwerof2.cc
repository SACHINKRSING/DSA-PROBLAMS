#include <iostream>
#include <math.h>
using namespace std;
int power(int n)
{
    int i = 0;
    while (i <= n)
    {
        int ans = pow(2, i);
        if (n % ans == 0)
        {
            cout << "power of two";
            break;
        }
        else
        {
            cout << "no";
            break;
        }
    }
    
}
int main()
{
    int n;
    cin >> n;
    power(n);
    return 0;
}