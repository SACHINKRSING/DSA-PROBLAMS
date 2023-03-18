#include<iostream>
using namespace std;
 int main(){
    int i,n;
    i=1;
    int count =0;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        
        while (j<=n)
       {char ch =count+'A';
        cout<<ch;
        count++;
       
        j++;
       }
    cout<<endl;
    i++;
    
    }
    
 }