#include<iostream>
using namespace std;
int main(){
  int n=9 ,j=0; //here j will increment only when it encounter negative element.
  int arr[n]={-12,11,-13,-5,6,-7,5,-3,-6};
  for(int i=0;i<n;i++){
      if(arr[i]<0 ){
          if((i!=j))
          swap(arr[i],arr[j]);

           j++;
          
      }
     
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
}