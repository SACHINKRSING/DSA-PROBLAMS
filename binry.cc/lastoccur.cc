#include<iostream>
using namespace std;
int lastoccurance(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){

    int arr[11]={1,2,3,3,3,3,3};
    int an=lastoccurance(arr,7,3);
    cout<<"last occurence of  3 is at "<<an;
}