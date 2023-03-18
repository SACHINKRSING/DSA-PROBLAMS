#include <iostream>
using namespace std;
int main()
{ int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int ans;
    for (int i = 2; i < n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
        
    }
    switch (n)

        {
        case 1:
            cout << "0";

            break;
        case 2:
            cout << "1";

            break;

        default:
            cout << ans;
            break;
        }
}
