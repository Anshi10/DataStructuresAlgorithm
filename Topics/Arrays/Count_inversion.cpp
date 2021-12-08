//brute force approach: Time complexity = O(n^2)
//space complexity = O(1) 
// #include<iostream>
// using namespace std;
// int main(){
//      int arr[]={1, 1, 1, 1};
//      int k=2;
//      int count = 0;
//      int n= sizeof(arr)/sizeof(arr[0]);
//      for(int i=0;i<n-1;i++){
//          for(int j=i+1;j<n;j++){
//              if(arr[i]+arr[j]==k){
//                  count += 1;
//              }
//          }
//      }cout<<count;
// }
//time complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
int getpairscount(int arr[],int n,int sum){
    unordered_map<int,int> m;
    int count = 0;
    for(int i=0;i<n;i++){
        int x= sum - arr[i];

        if(m[x]==0){
            m[arr[i]]++;
        }
        else{
            count += m[x];
            m[arr[i]]++;
        }
    }
    return count;
}
int main(){
    int arr[]= {1, 5, 7, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<getpairscount(arr,n,6);
}