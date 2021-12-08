#include<iostream>
using namespace std;
unsigned long factorial(long n){
    if(n==1)
    return 1;

    unsigned long ans = n*factorial(n-1);
    return ans;
}
int main(){
   long n;
   cout<<"enter n : ";
   cin>>n;
   cout<< factorial(n);
}