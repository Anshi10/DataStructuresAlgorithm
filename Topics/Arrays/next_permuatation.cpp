//brute force approach
//time complexity : n*n!
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//    int arr[]={1,2,3};
//    int ans[]={3,2,1};
//    int n=3;
//    next_permutation(arr , arr+n);
//        if(next_permutation(arr , arr+n)){
//        for(int i=0;i<n;i++){
//            cout<<arr[i]<<" ";
//        }
//    }
     
// }

//approach 2 
//space complexity : O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1,5,8,4,7,6,5,3,1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int idx = -1 ;
//     // from the end we are checking the first element which is greater than it's previous element.
//     for(int i=n-1;i>0;i--){
//         if(arr[i]>arr[i-1]){
//             idx = i;
//             break;
//         }
//     }
//         if(idx == -1){
//             reverse(arr , arr+n);
//         }
//         //now we will run the loop from idx+1 till the end to find closest no. which is gretaer than the arr[idx-1]
//         else{
//          int prev = idx;
//         for(int i=idx+1 ; i<n;i++){
//             if(arr[i]>arr[idx-1] && arr[i]<=arr[prev]){
//                 prev = i;
//             }
//         }
//         swap(arr[idx-1],arr[prev]);
//         reverse(arr+idx , arr+n);
//         }  
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
// }
//time complexity : O(NlogN)
#include<bits/stdc++.h>
using namespace std;
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return ;
        }
        int peak = -1;
        for(int i=n-1; i>0;i--){
            if(nums[i]>nums[i-1]){
                peak = i;
                break;
            }
        }
        if(peak == -1){
            for(int i=0;i<n/2;i++){
                swap(nums[i],nums[n-i-1]);
            }
            return ;
        }
        int index = peak;
        for(int i=peak ; i<n;i++){
            if(nums[i]>nums[peak-1] and nums[i]<nums[index]){
                index = i;
            }
        }
        swap(nums[peak-1], nums[index]);
        sort(nums.begin()+peak , nums.end());
    }
int main(){
    vector<int> nums ={1,2,3,5,4,2};
    int n = nums.size();
     nextPermutation(nums);
     for(int i=0;i<n;i++){
           cout<<nums[i]<<" ";
     }
}
