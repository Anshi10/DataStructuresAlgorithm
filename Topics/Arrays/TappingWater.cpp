#include<bits/stdc++.h>
using namespace std;
//tc :O(n), sc : O(n)
int amount(int arr[],int n){
    int left[n];
    int right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        left[i]= max(arr[i],left[i-1]);
    }
     for(int i=n-2;i>=0;i--){
        right[i]= max(arr[i],right[i+1]);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
     sum += min(left[i],right[i])-arr[i];
    }
    return sum;
}
int main(){
       int n;
       cin>>n;
        int arr[n];
       for(int i=0;i<n;i++){
            cin>>arr[i];
       }
  for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
  } 
  long long ans = amount(arr, n);
       cout<<"ans = "<<ans;
}
