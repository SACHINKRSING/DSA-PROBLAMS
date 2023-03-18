// hame count karna hai number of set bits(number of 1 bit)//
#include <iostream>
using namespace std;
int setbit1(int n )
{
    int count1 = 0;

    while (n)
    {
        count1 += n & 1;

        n =n>>1;
    }

    return count1;
}
int setbit2(int m)
{
    int count2 = 0;
    while (m)
    {
        count2 += m & 1;
        m >>= 1;
    }
    return count2;
}
int main()
{
    int n, m;
    cin >> n >> m;
    
    cout << "number of one bit=" <<setbit1(n)+setbit2(m);
}