//TC : O(nlogn) SC : O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans = INT_MAX;
    for(int i=0;i<=n-m;i++){
       int dif = arr[i+m-1]-arr[i];
       ans= min(ans ,dif);
    }
    cout<<" ans = "<<ans;
}