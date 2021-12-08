#include<iostream>
using namespace std;
int main(){
     int n , c1,c2,c3;
    int arr[n];
    cout<<"enter n = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        switch(arr[i]){
            case 0:
            c1++;
            break;

            case 1:
            c2++;
            break;

            case 2:
            c3++;
            break;

        }
    }
    int k=0;
    for(int i=0;i<c1;i++) arr[k++]=0;
    for(int i=0 ;i<c2;i++) arr[k++]=1;
    for(int i=0 ;i<c3;i++) arr[k++]=2;
     
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}