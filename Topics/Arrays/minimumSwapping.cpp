#include<bits/stdc++.h>
using namespace std;
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int fav=0,nonFav=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k) fav++;
        }
        int l=0,r=0,result=INT_MAX;
        for(int j=0;j<fav;j++){
            if(arr[j]>k) nonFav++;
        }
        while(r<n){
            result = min(result,nonFav);
            r++;
            if(r<n && arr[r]>k) nonFav++;
            if(l<n && arr[l]>k) nonFav--;
            l++; 
        }
       if(result==INT_MAX){
           return 0;
       }
       else
       return result;
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        cout<<minSwap(arr,n,k);
    }