#include<iostream>
using namespace std;
 int main(){
    int i,n;
    i=1;
    int count =1;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        
        while (j<=n)
       {char ch ='A'+i-1;
        cout<<ch;
        ch++;
        j++;
       }
    cout<<endl;
    i++;
    
    }
    
 }