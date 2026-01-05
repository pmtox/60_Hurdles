#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	int maxx = arr[0];
	for(int i = 0;i< n; i++){
		if(maxx < arr[i]){
			maxx = arr[i];
		}
	}
	cout<<maxx;
}
