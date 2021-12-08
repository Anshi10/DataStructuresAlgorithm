// kadan's algo
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int arr[n]= {-1,-2,-3,-4};
    int sum =arr[0] , max = arr[0];
    for(int i=1;i<n;i++){
        if(sum >= 0){
            sum += arr[i];
        }
        else{
            sum  = arr[i];
        }
        if(sum > max){
            max = sum ;
        }
    }
    cout<<" max = "<<max;
}