#include<iostream>
using namespace std; 
int fibonacciNumber(int n){
    int a=0;
    int b=1;
    int ans;
    for(int i=2;i<n;i++){
        ans=a+b;
        a=b;
        b=ans;
        }
    switch(n){
        case 1:return 0;
            break;
        case 2:return 1;
            break;
        default:return ans;
            break;
    }
    }
    int main(){
        int n;
        cin>>n;
        cout<<fibonacciNumber(n);
    }

