#include<bits/stdc++.h>
using namespace std;
void naiveApproach(int a[],int b[],int n,int m){
    vector<int> v;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(a[i]<b[j]){
               v.push_back(a[i]);
               break;
          }
          if(b[j]<a[i]){
              v.push_back(b[i]);
          }
      }
    }
    cout<<"sorted array"<<endl;
    for(int &i:v){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    int m;
    cout<<" enter n and m"<<endl;
    cin>>n>>m;
    int a[n];
    cout<<" enter a "<<endl;
    for(int &i: a){
        cin>>i;
    }
    int b[m];
    cout<<"enter b "<<endl;
    for(int &j : b){
        cin>>j;
    }
    naiveApproach(a,b,n,m);
    return 0;
}