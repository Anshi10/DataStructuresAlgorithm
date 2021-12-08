//time complexity : O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        count++;
    }
    int product = 1;
    for(int i=0;i<n;i++){
         if(arr[i]==0){
       continue;
     }
        if(count%2==0){
           cout<<arr[i]<<" ";
           product *= arr[i];
        }
        if(count%2 != 0){
            if(arr[i]<0)
            break;

            if(arr[i]>0)
           cout<<arr[i]<<" ";
           product *= arr[i];
        }
       

    }
    cout<<"\n Product = "<<product;

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=arr[0];
//     int Max = arr[0];
//     int Min = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<0)
//         swap(Max,Min);

//         Max = max(arr[i],Max*arr[i]);
//         Min = min(arr[i],Min*arr[i]);
//         ans = max(Max,ans);
//     }
//     cout<<ans;
//     return 0;
// }