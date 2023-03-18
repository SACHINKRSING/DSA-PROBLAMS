#include<iostream>
using namespace std;
int binsr(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(key==arr[mid]){
             return mid;
        }
        if (key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        return -1;
    }
    
}
int main(){
    int even[6]={2,3,4,7,8,9};
    int ans=binsr(even,6,4);
    cout<<" index :"<<ans;
}
