#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int sum=0;
    int array[100];
    for(int i=0;i<size;i++){
            cin>>array[i];
            sum+=array[i];  
            cout<<array[i]<<" ";
           
    }
    cout<<endl;
     cout<<"sum is : "<<sum;
    
    
}