//check for palindrome
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number to check "<<endl;
    cin>>num;
    int n=num;
    int digit,rev=0;
    while(num !=0){
        digit = num % 10;
        rev = (rev*10)+digit;
        num = num/10;
    }
    if(rev==n){
        cout<<"Palindrome";
    }
    else cout<<" Not Palindrome";
}