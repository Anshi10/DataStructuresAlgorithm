#include<iostream>
using namespace std;
int binarySearch(int arr[],int beg , int end , int num){
     if(beg<=end){
         int mid = (beg+end)/2;
         if(num==arr[mid])
         return mid;

         if(num>arr[mid])
        return binarySearch(arr,mid+1,end,num);

         if(num<arr[mid])
         return binarySearch(arr,0,mid-1,num);
     }
 return -1;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 40;
    int index = binarySearch(arr, 0,n-1,num);
    if(index==-1){
        cout<<"element is not present in the array";
    }
    else{
        cout<<"element is present at index"<<index<<endl;
    }
}