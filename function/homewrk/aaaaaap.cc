#include<iostream>
using namespace std;
int isAP(int n){
    int ap;
    ap=3*n+7;
    return ap;
}
int main (){
    int n;
    cin>>n;
    cout<<isAP(n)<<endl;
    int m;
    cin>>m;
    cout<<isAP(m);
    
    
}