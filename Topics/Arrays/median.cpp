// Median of 2 sorted arrays of equal size
#include<bits/stdc++.h>
using namespace std;
//TC : O(nlogn)+O(n),SC : O(n+n) BRUTE FORCE APPROACH
void median(int a[],int b[],int n){
  vector<int> v;
  for(int i=0;i<n;i++){
      v.push_back(a[i]);
  }
  for(int i=0;i<n;i++){
      v.push_back(b[i]);
  }
  sort(v.begin(),v.end());
  int size = v.size();
  int median = floor(size/2);
  cout<<"median = "<<median<<endl;
  if(size%2 != 0){
      cout<<"ans = "<<v[median];
  }
  else{
      int result = (v[median]+v[median-1])/2;
      cout<<"ans = "<<result;
  }
}
int main(){
   int n;
   cin>>n;
   int a[n],b[n];
   for(int &i : a){
       cin>>i;
   }
   for(int &j:b){
       cin>>j;
   }
   median(a,b,n);
}