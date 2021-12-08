#include<bits/stdc++.h>
using namespace std;
 
void appear(int arr[], int n , int k){

    unordered_map<int , int> m;
    int x=n/k;
    for(int i=0;i<n;i++){
        m[arr[i]]++; 
    }
    cout<<"\n map : "<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"ans : ";
    for(auto &pr : m){
        if(pr.second>x){
            cout<<pr.first<<endl;
        }
    }
}
int main(){
      int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    appear(arr,n,k);
}