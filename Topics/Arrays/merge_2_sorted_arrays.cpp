//Method-1 , Time Complexity = O((n+m).log(n+m))
//space complexity : O(n+m)
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n =4 , m =5 , k = m+n ;
  int  arr1[n]= {1, 3, 5, 7};
  int arr2[m]= {0, 2, 6, 8, 9};
  int arr3[k];
  int j=0;
    for(int i=0;i<k;i++){
      if(i<n){
          arr3[i]=arr1[i];
      }
      if(i>=n){
          arr3[i]=arr2[j];
          j++;
      }
  }
  sort(arr3,arr3 +k);
  cout<<"sorted array : "<<endl;
       for(int i=0;i<k;i++){
       cout<<arr3[i]<<" ";
   }
   cout<<endl;
   int h=0;
    for(int i=0;i<k;i++){
         if(i<n){
             arr1[i]=arr3[i];
         }                   
         if(i>=n){
             arr2[h]=arr3[i];
             h++;
         }     
   }
   for(int i=0;i<n;i++){
       cout<<arr1[i]<<" ";
   }cout<<endl;
    for(int i=0;i<m;i++){
       cout<<arr2[i]<<" ";
   }
  return 0;
}

//Method-2 , time complexity : O(n*mlogm)
#include<bits/stdc++.h>
using namespace std;
int checksort(int arr[],int n){
    if(n<=1)
    return 1;

    if(arr[n-1]<arr[n-2])
    return 0;

    checksort(arr , n-1);
}
int main(){
   int n =2 , m =3 ;
  int  arr1[n]= {10, 12};
  int arr2[m]= {5, 18, 20};
  for(int i=0;i<n;i++){
    if(arr1[i]> arr2[0]){
      swap(arr1[i],arr2[0]);
    }
      int result = checksort(arr2 , m);
      if(result == 0){
          sort(arr2 , arr2 +m);
      }
  }
  for(int i=0;i<n;i++){
      cout<<arr1[i]<<" ";
  }
  for(int i=0;i<m;i++){
      cout<<arr2[i]<<" ";
  }
}
//Method -3 , time complexity :O((n+m)log(n+m))
//space complexity :O(1)
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//this method will return gap sequence
int nextgap(int gap){
   if(gap<= 1)
   return 0;

   return (gap/2)+(gap%2); //giving ceil values
}
int main(){
  int n =5 , m =2 ;
  int  arr1[n]= { 10, 27, 38, 43, 82 };
  int arr2[m]= { 3, 9 };
  int i, j, gap = n + m;
    for (gap = nextgap(gap);
         gap > 0; gap = nextgap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++){
           if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
        }
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++){
          if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
        }
     
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++){
               if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
            }
        }
    }

  cout<<"sorted array1 : "<<endl;
  for( i=0;i<n;i++){
    cout<<arr1[i]<<" ";
  }
 cout<<"\nsorted array2 : "<<endl;
 for(i=0;i<m;i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}
 
