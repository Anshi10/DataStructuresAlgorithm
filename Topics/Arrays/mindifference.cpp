#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr+n);
        int min_elem, max_elem;
        int ans = arr[n-1] - arr[0];
        
        for (int i=1 ; i<n; i++){
            if (arr[i] >= k)
            {
                max_elem = max(arr[i-1] + k, arr[n-1] - k );
                min_elem = min(arr[0] + k, arr[i] - k );
                ans = min(ans, max_elem - min_elem);
            }
        }
        return ans;
    }
int main(){
    int arr[10]={2, 6 ,3, 4, 7, 2 ,10, 3 ,2, 1};
    int k =5;
    cout<<getMinDiff(arr , 10,k);
//     int n = 10 , k=5;
//     int arr[n] = {5, 5, 8, 6, 4, 10, 3, 8, 9, 10};
//    sort(arr , arr+n);
//    arr[0] += k;
//    arr[n-1] -=  k;
//    sort(arr , arr+n);
//    for(int i=1;i<n-1;i++){
//        if( (arr[i]+k < arr[n-1]) || (arr[i] + k  >0)){
//            arr[i] += k;
//        }
//        else{
//            arr[i] -= k;
//        }
//    }
//    sort(arr , arr + n);
//    cout<<arr[n-1] - arr[0];
}

//5
//10
//2 6 3 4 7 2 10 3 2 1