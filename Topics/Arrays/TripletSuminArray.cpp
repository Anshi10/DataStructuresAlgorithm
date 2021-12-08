#include<bits/stdc++.h>
using namespace std;
//time complexity:O(n^2) , space complexity : O(n)
bool check(int a[],int n,int x){
    unordered_set<int> s;
    int curr;
    for(int i=0;i<n-2;i++){
        curr= x-a[i];
        for(int j=i+1;j<n;j++){
            if(s.find(curr-a[j]) != s.end()){
                return true;
            }
            s.insert(a[j]);
        }
    }
    return false;
}
//TC : O(n^2), SC : O(1)
bool checkagain(int arr[],int n,int x){
    sort(arr, arr+n);
    for(int i=0;i<n-2;i++){
        int curr=x-arr[i];
        int j=i+1;
         int k=n-1;
        while(j<k){
        int sum = arr[j]+arr[k];
            if(sum==curr)
            return true;

            else if(sum>curr){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return false;
}
int main(){
    int n ;
    cin>>n;
     int a[n];
    for(int &i : a){
        cin>>i;
    }
    int x;
    cin>>x;
    bool result = checkagain(a,n,x);
     cout<<result;
}