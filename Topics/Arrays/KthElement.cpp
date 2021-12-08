#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n ){
      if(n<=1){
          return;
      }
      insertion_sort(arr,n-1);
      int key = arr[n-1];
      int j = n-2;
      while(j>=0 && arr[j]>key){
          arr[j+1]= arr[j];
          j=j-1;
      }
      arr[j+1] = key;
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    insertion_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"enter K = ";
    cin>>k;
    cout<<"\n"<<arr[k-1];
    return 0;
}
