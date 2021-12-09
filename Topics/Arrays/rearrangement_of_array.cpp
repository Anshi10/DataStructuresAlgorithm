//Tc=SC=O(n)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      vector<int> v = {1, 2, 3, -4, -1, 4};
//      int n= v.size();
//     vector<int> v1 ;
//     vector<int>v2;
//     for(int i=0;i<n;i++){
//        if(v[i]>0){
//            v1.push_back(v[i]);
//        }
//        else{
//            v2.push_back(v[i]);
//        }
//     }
//     int i=0;
//     int j=0;
//     int k=0;
//     int s1 = v1.size();
//     int s2 = v2.size();
//     while(j<s1 && k<s2){
//         v[i]=v2[k];
//         i++,k++;
//         v[i]=v1[j];
//         j++,i++;
//     }
//     while(j<s1){
//         v[i]= v1[j];
//         j++;
//     }
//     while(k<s2){
//         v[i]=v2[k];
//         k++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }
//TM = O(n) , SC= O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            j++;
            swap(arr[i],arr[j]);
        }
        else{
            continue;
        }
    }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}
