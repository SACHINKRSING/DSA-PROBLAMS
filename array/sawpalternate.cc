#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int css[size];
    int i,ans;
    for(i=0;i<size;i++
    ){
        cin>>css[i];
    }
    for(i=0;i<size-1;i=i+2){
        swap(css[i],css[i+1]);
        
    }
    for(i=0;i<size;i++){
        cout<<css[i]<<" ";
    }
    
}