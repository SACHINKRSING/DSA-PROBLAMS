#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num= factorial(n);
    int deno=factorial(n-r)*factorial(r);
    int answer=num/deno;
    return answer;
}
int main(){
    int n,r;
    cin>>n>>r;
   cout<<ncr(n,r);
}