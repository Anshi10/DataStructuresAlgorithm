#include<iostream>
using namespace std;
int main(){
    int j = 5 , k=4;
    int arr1[j]={4,7,2,4,5};
    int arr2[k]={1,2,3,4};
    int count = 0;
    for(int i=0;i<j;i++){
        for(int x=0;x<k;x++){
            if(arr1[i]==arr2[x]){
                count++;
            }
        }
    }
    int sum = j+k;
    cout<<sum-count;
}