//brute force technique
//time complexity : O(n^2)
//this method does not take any extra space complexity

// #include<iostream>
// using namespace std;
// int main(){
//    int n=7;
//    int arr[n]= {7,0,1,3 ,3,8,9 };
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//               if(arr[i]==arr[j])
//               cout<<arr[i]<<" ";
//        }
//    }
//    return 0;
// }

//time complexity : O(nlogn+n) && this method does not take any extra space complexity

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=7;
//     int arr[n]={7,0,1,3 ,3,8,9};
//    sort(arr , arr+n);
//    for(int i=0;i<n;i++){
//        cout<<arr[i];
//    }
//    cout<<endl;
//    for(int i=1;i<n;i++){
//        if(arr[i]==arr[i-1]){
//            cout<<arr[i];
//        }
//    }
// }

//another method , Time complexity : O(n)
//space complexity : O(n)
//approach : we have initiated all the elements with 0 and increment corresponding to the index of arr[i].

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 9;
//     int arr[n]= {2,7,1,4,1,7,8,2,8};
//     int ans[n]{0}; // this how we initialise all the elements with same value.
//     for(int i=0;i<n;i++){
//         ans[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(ans[i] > 1){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }
// here we are adding n in the index of arr[i].
#include<iostream>
using namespace std;
int main(){
    int n = 9 , count;
    int arr[n] ={2,7,1,4,1,7,8,2,8 };
    for(int i=0;i<n;i++){
        arr[arr[i]%n] += n;
    }
    for(int i=0;i<n;i++){
        int count = arr[i]/n; // here we get to know how many times n is added and that number of time shows how many times that number is appeared in the array.
        if(count > 1){
            cout<<i<<" ";
        }
        arr[i] %= n;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity : O(n)
//space complexit : O(1)