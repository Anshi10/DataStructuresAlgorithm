#include<iostream>
using namespace std;
int maxof(int arr[],int n){
    if(n==0){
        return 0 ;
    }
    int max = arr[0];
    maxof(arr,n-1);
    if(arr[n-1]>max){
        max = arr[n-1];
        return max;
    }
    
}
int minof(int arr[],int n){
    int minn = arr[0];
    if(n==1){
        return min(arr[0],minn);
    }
    if(arr[n-1]<minn){
        minn = arr[n-1];
        return minn;
    }
     minof(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"max = "<<maxof(arr,n)<<endl;
    cout<<"min = "<<minof(arr,n)<<endl;
}