#include <iostream>
using namespace std;
int main()
{
    int i, n;
    i = 2;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not a prime number";
            break;
           
        }
        else
        {
            cout << "prime number";
            break;

            
        }
        i++;

        /* code */
    }
}