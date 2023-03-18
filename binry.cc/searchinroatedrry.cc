#include <iostream>
using namespace std;
int gpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int search(int arr[],int size,int key){
    int pivot=gpivot(arr,size);
    if(key>=arr[pivot && key<=arr[pivot]]){
   return binarysearch(arr,pivot,size-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
    }
}
int main(){
    int arr[7]={7,8,9,1,2,3,4};
    cout<<search(arr,7,1);
}