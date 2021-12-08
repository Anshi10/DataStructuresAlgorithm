#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool mycompare(pair<int,int> p1 , pair<int,int> p2){
    return p1.first < p2.first;
}
int main(){
    // //syntax of creating a pair
    // pair <int,char> p;
    // //accessing values
    // p.first = 10;
    // p.second = 'a';

    //QUESTION = we are given an array and we have to increment the elements of  ascending order like this:
    //arr[]={10,16,7,14,5,3,12,9}
    //ans[]={4,7,2,6,1,0,5,3}

    int arr[]={10,16,7,14,5,3,12,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //make a vector to store pair of arr[i],i
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr[i],i)); //pair<int , int> p
                                           //p.first= arr[i] , p.second =i
    }
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" , "<<v[i].second;
        cout<<endl;
    }
    //sort the vector
    sort(v.begin(),v.end(),mycompare);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" , "<<v[i].second;
        cout<<endl;
    }
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
}