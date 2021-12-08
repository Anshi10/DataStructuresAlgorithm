//TC : O(n1 + n2 +n3)
#include<bits/stdc++.h>
using namespace std;
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0;
            vector<int> v;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    v.push_back(A[i]);
                    i++,j++,k++;
                }
                else if(A[i]<B[j]){
                    i++;
                }
                else if(B[j]<C[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            int n = v.size();
            vector<int>::iterator ip;
            ip = std::unique(v.begin(), v.end());
            v.resize(std::distance(v.begin(), ip));
            
            return v;
 }
 int main(){
     int A[]={1, 5, 10, 20, 40, 80};
     int B[]={6, 7, 20, 80, 100};
      int C[]={3, 4, 15, 20, 30, 70, 80, 120};
      int n1,n2,n3;
       n1=6,n2=5,n3=8;
       vector<int> v;
     v=  commonElements(A,B,C,n1,n2,n3);
     
      for(auto element : v){
          cout<<element<<" ";
      }
 }
 //appraoch : 3 pointer approach.