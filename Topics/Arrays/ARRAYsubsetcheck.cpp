//time complexity : O(n+m), space complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
bool  check(int v1[],int v2[],int x,int y){
     unordered_map<int, int> m;
     for(int i=0;i<x;i++){
       m[v1[i]];
     }
     for(int i=0;i<y;i++){
        auto it = m.find(v2[i]);
        if(it != m.end()){
        continue;
        }
        else{
            return false;
        }
     }
 return true;
}
int main(){
    int n,m;
    cout<<"enter n and m "<<endl;
    cin>>n>>m;
int v1[n],v2[m];
 cout<<"enter v1"<<endl;
 for(int &i:v1){
     cin>>i;
 }
 cout<<"enter v2"<<endl;
 for(int &i:v2){
     cin>>i;
 }
bool result = check(v1,v2,n,m);
cout<<result<<endl;
}