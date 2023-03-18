#include<iostream>
using namespace std;
int firstoccurence(int arr[],int size ,int key){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}
int main(){
    int key;
    key=3;
    
    int arr[6]={1,2,3,4,3,4};
    cout<<"first occurence is ="<<firstoccurence(arr,6,key);
}