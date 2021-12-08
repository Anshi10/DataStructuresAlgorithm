#include<bits/stdc++.h>
using namespace std;
int shellSort(int arr[],int n){
    int gap = n/2;
    for(gap ; gap >= 1;gap--){
        for(int j= gap ;j<=n-1;j++){
            for(int i= j-gap;i>=0;i-gap){
                if(arr[i+gap]>arr[i]){
                     break;
                }
                else
                swap(arr[i+gap], arr[i]);
            }
        }
    }
    return 0;
}
int main(){
    int n=5 ;
    int arr[n]= {12, 34, 54, 2, 3};
    cout<<"UNSORTED ARRAY : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    shellSort(arr , n);
    cout<<" SORTED ARRAY : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}