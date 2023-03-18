#include<iostream>
using namespace std;
int febonaci(int n){
    int a=0;
    int b=1;
    int ans=0;
    for(int i=3;i<=n;i++){
     ans=a+b;
     a=b;
     b=ans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    switch (n)
    {
    case 1:cout<<"0";
        
        break;
        case 2:cout<<"1";
        break;
    
    default:cout<<febonaci(n);
        break;
    }
}