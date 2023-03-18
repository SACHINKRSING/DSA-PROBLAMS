#include <iostream>
using namespace std;
int max(int num[], int n)
{
    int max = INT8_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }return max;
}


int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<=size;i++){
        cin>>num[i];
    }
   
    cout<<"greteset is "<<max(num,size)<<endl;

}