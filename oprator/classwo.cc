#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-->0 || ++b>2)
    {
       cout<<" stage 1 imside if";
    }
    else{
        cout<<"satge 2 inside else";
    }
    cout<<endl;
    cout<<a<<" "<<b;
    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    
}
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-->0 && ++b>2)
    {
       cout<<" stage 1 imside if";
    }
    else{
        cout<<"satge 2 inside else";
    }
    cout<<endl;
    cout<<a<<" "<<b;
}
