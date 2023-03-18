#include<iostream>
using namespace std;
int firstoccr(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(key==arr[mid]){
        ans=mid;
        e=mid-1;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}
int lastoccr(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(key==arr[mid]){
        ans=mid;
        s=mid+1;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}
int main(){
    int arr[7]={1,2,3,4,4,4,4};
    int an=lastoccr(arr,7,4)-firstoccr(arr,7,4);
    cout<<"first occurence of 4 is ="<<firstoccr(arr,7,4)<<endl;
    cout<<"last occurence of 4 is ="<<lastoccr(arr,7,4)<<endl;
    cout<<"total occuence of 4 is ="<<an+1;
}