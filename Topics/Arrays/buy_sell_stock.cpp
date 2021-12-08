//brute force approach : Max profit = max diff
//TC :O(n^2) , taking too much time
// #include<iostream>
// using namespace std;
// int profit(int arr[], int n){
//     int maxprofit = 0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int profit = arr[j]-arr[i];
//             if(profit>maxprofit)
//             maxprofit = profit;
//         }
//     }
//     return maxprofit;
// }
// int main(){
//     int arr[]={2,4,1};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     cout<<profit(arr,n);
//}
// #include<iostream>,
// using namespace std;
// int profit(int arr[],int n){
//     int min=arr[0];
//     int index ;
//     for(int i=0;i<n;i++){
//         if(arr[i]<=min){
//             min = arr[i];
//             index = i;
//         }
//     }
//     int max = arr[index];
//     if(index==n-1){
//         return 0;
//     }
//     for(int i=index ;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return (max-min);
// }
// int main(){
//     int arr[]={1};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     cout<<profit(arr,n);
// }
//this approach failed for this array : {2,4,1} Expected output:2 , our output = 0(wrong)

//TC :O(n) ,  SC : O(1)
#include<iostream>
using namespace std;
int main(){
      int arr[]={2,4,1};
      int n= sizeof(arr)/sizeof(arr[0]);
      int maxprofit =0;
      int min=arr[0];
      for(int  i=0;i<n;i++){
          if(arr[i]<min)
          min=arr[i];
          
          else if(arr[i]-min>maxprofit)
          maxprofit = arr[i]-min;
      }
      cout<<maxprofit;
}
