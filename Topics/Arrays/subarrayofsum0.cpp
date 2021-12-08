//approach 1 : time complexity : O(N^2) , space complexity : O(1)
// #include<iostream>
// using namespace std;
// bool findsum(int arr[], int n){
//    int sum;
//    bool res = false;
//    for(int i=0;i<n;i++){
//        sum =0;
//        for(int j=i;j<n;j++){
//           sum = sum +arr[j];
//              if(sum==0){
//            res = true;
//            break;
//        }
//        }
//    if(sum==0){
//            res = true;
//            break;
//        }
//    }
//   return res;
// }
// int main(){
//   int n ;
//   int arr[n];
//   cout<<"enter n : ";
//   cin>>n;
//   cout<<"enter array";
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//  bool res =  findsum(arr , n);
//  if(res){
//      cout<<"yes";
//  }
//  else{
//      cout<<"No";
//  }
//  return 0;
// }
//approach 2 : time complexity : O(n),space complexity : O(n)
#include<iostream>
#include<map>
using namespace std;
bool findsum(int arr[],int n){
    map<int,int> res;
    bool result = false;
    int s=0;
    for(int i=0;i<n;i++){
         s= s+arr[i];
         if(s==0 || arr[i]==0 || res[s]){
             result = true;
             break;
         }
         else{
             res[s]=1;
         }
    }
 return result;
}
int main(){
  int n ;
  int arr[n];
  cout<<"enter n : ";
  cin>>n;
  cout<<"enter array";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
 bool res =  findsum(arr , n);
 if(res){
     cout<<"yes";
 }
 else{
     cout<<"No";
 }
 return 0;
}