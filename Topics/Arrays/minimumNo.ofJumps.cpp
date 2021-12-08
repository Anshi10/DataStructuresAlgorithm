#include<iostream>
using namespace std;
int  main(){
    int n =10;
   int arr[n]={2 ,3, 1, 1 ,2 ,4 ,2, 0, 1, 1};
    int count = 0;
    int i=0;
    while(i < n-1){
        if(arr[i] != 0){
            i += arr[i];
        count++;
        }
        else{
            count = -1;
            break;
        }
    }
    cout<<count;
}
//DYNAMIC PROGRAMMING APPROACH
// time complexity : O(n^2)
//Space Complexity : O(n)
// #include<iostream>
// using namespace std;
// const int inf = 1e9;
// int minjumps(int arr[],int n){
//         int i,j;
//         int min_jump_arr[n]={0,inf, inf,inf,inf,inf,inf,inf,inf,inf};

//     for( i=1;i<n;i++){
//         for(j=0;j<i;j++){
//             if(i <= j+arr[j]){
//                 min_jump_arr[i] = min(min_jump_arr[i], min_jump_arr[j]+1);
//             }
           
//         }
//     }
//      return min_jump_arr[n-1];
// }
// int main(){
//     int n=10;
//     int arr[n]={2 ,3, 1, 1 ,2 ,4 ,2, 0, 1, 1};
//     cout<<minjumps(arr,n);
// }
//GREEDY APPROACH
//Time Complexity : O(n)
//Space Complexity : O(1)
// #include<iostream>
// using namespace std;
// int minJumps(int arr[], int n) 
//     { 
          
//         // The number of jumps needed to reach the starting index is 0 
//         if (n <= 1) 
//             return 0; 
      
//         // Return -1 if not possible to jump 
//         if (arr[0] == 0) 
//             return -1; 
      
//         // initialization 
//         int maxReach = arr[0];  // stores all time the maximal reachable index in the array. 
//         int step = arr[0];      // stores the number of steps we can still take 
//         int jump =1;//stores the number of jumps necessary to reach that maximal reachable position. 
      
//         // Start traversing array 
//         int i=1; 
//         for (i = 1; i < n; i++) 
//         { 
//             // Check if we have reached the end of the array 
//             if (i == n-1) 
//                 return jump; 
      
//             // updating maxReach 
//             maxReach = max(maxReach, i+arr[i]); 
      
//             // we use a step to get to the current index 
//             step--; 
      
//             // If no further steps left 
//             if (step == 0) 
//             { 
//                 // we must have used a jump 
//                 jump++; 
      
//                 // Check if the current index/position or lesser index 
//                 // is the maximum reach point from the previous indexes 
//                 if(i >= maxReach) 
//                     return -1; 
      
//                 // re-initialize the steps to the amount 
//                 // of steps to reach maxReach from position i. 
//                 step = maxReach - i; 
//             } 
//         } 
      
//         return -1; 
//     }
//     int main(){
//         int n = 4;
//         int arr[n]={2,1,0,7};
//         cout<<minJumps( arr, n) ;
//     }
