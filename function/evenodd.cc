#include<iostream>
using namespace std;

    bool isEVEN(int a){
        
        
        if(a&1){
            return 0;
        }
        else{
            return 1;
        }
    }
    int main(){
        int a;
        cin>>a;
        
        if(isEVEN(a)){
            cout<<"number is even";
        }
        else{
            cout<<"number is odd";
        }
    }
