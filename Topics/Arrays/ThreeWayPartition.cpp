#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int a;
  cin>>a;
  int b;
  cin>>b;
    int i=0;
    int l=0;
    int h=n-1;
  while(i<=h){
      if(arr[i]<a) swap(arr[i++],arr[l++]);
      else if(arr[i]>b) swap(arr[i],arr[h--]);
      else i++;
  }
  cout<<" partitined array : "<<endl;
  for(int &i: arr){
    cout<<i<<" ";
  }
  return 0;
}