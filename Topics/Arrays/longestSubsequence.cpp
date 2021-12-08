//TC : O(nlogn)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N;
//     cin>>N;
//     int arr[N];
//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+N);
//    int count =1;
//     int ans=0;
//     int result;
//     for(int i=1;i<N;i++){
//         result = arr[i]-arr[i-1];
//        if(result ==1){
//            count += 1;
//        }
//        if(result ==0){
//            continue;
//        }
//        if(result !=1){
//            ans = max(ans,count);
//            count=1;
//        }
//     }
//     ans = max(ans,count);
//     cout<<ans;
// }
//time complecity : O(n) space complexity:O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n ;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
  unordered_set<int> S;
    int ans = 0;
 
    // Hash all the array elements
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);
 
    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < n; i++)
    {
        // if current element is the starting
        // element of a sequence
        if (S.find(arr[i] - 1) == S.end())
        {
            // Then check for next elements
            // in the sequence
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;
 
            // update  optimal length if
            // this length is more
            ans = max(ans, j - arr[i]);
        }
    }
    cout<<"ans = "<<ans;
    return 0;
}