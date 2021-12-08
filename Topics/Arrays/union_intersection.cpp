#include<iostream>
using namespace std;
int main(){
    int j = 6 , k=2;
    int arr1[j]={85, 25, 1, 32, 54, 6};
    int arr2[k]={85 ,2 };
    int count = 0; //this take count of repeated items
    for(int i=0;i<j;i++){
        for(int x=0;x<k;x++){
            if(arr1[i]==arr2[x]){
                count++;
            }
        }
    }
    int sum = j+k;
    cout<<"union = "<<sum-count<<endl;
    cout<<"intersection = "<<count;
}