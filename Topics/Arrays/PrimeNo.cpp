#include<bits/stdc++.h>
using namespace std;
void findPrime(int arr[],int n){
    // max element
    int max=  *max_element(arr, arr+n);
    int size=max+1;
    //this prime array shows that every element of it is unmarked
    int prime[size]={0};
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<size;i++){
        //unmarked element is prime number
        if(prime[i]==0){
            //mark the multiples of a prime number
            for(int j=i*i;j<=max;j+=i){
                prime[j]=1;
            }
        }
    }
    //print all prime numbers in the given array
  for(int i=0;i<n;i++){
      if(prime[arr[i]]==0){
          cout<<arr[i]<<" ";
      }
  }
}
int main(){
    int n;
    int arr[n];
    cout<<" Enter the Size of array";
    cin>>n;
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Prime No's are as follows"<<endl;
   findPrime(arr,n);
    return 0 ;
}