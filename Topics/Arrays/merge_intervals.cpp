#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	cin>>m;
    int k;
	int arr[n][m];
	cout<<"Input : "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][1]<=arr[i+1][0]){
                arr[i][1]=arr[i][0];
            }
            k=i;
		}
			}
        for(int i=k;i<n;i++){
            for(int j=0;j<m;j++){
              arr[i][j]=arr[i+1][j+1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             cout<<arr[i][j]<<" ";
            }
        }
}