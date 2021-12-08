#include<bits/stdc++.h>
using namespace std;
//TC : O(n^2), SC : O(ans.size())
int sum(int arr[],int n,int x){
    int j=0;
    int sum=0;
    int count=0;
   vector<int> ans;
   cout<<"checking whether sum exist or not"<<endl;
   for(int i=0;i<n;i++){
       sum+=arr[i];
   }
   if(sum<x){
       cout<<"NOt Possible";
   }
   else{
       sum=0;
       while(j<n){
    for(int i=j;i<n;i++){
        count++;
        sum += arr[i];
        if(sum>x){
            ans.push_back(count);
            break;
        }
    }
    sum =0;
    count=0;
    j++;
}
    int result = *min_element(ans.begin(),ans.end());
    return result;
   }
}
int optimalSol(int arr[],int n, int x){
    int mi = INT_MAX;
    int i=0,j=0;
    int sum=0;
    while(i<=j && j<n){
        while(sum<=x && j<n){
            sum += arr[j++];
        }
        while(sum>x && i<j){
            mi = min(mi,j-i);
            sum-=arr[i];
            i++;
        }
    }
    return mi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result = optimalSol(arr,n,x);
    cout<<" ans = "<<result;
}