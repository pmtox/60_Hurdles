#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i< n; i++){
		cin>>arr[i];
	}
	if(n < 2) {
		cout<<"NO SECOND LARGEST";
		return 0;
	}
	int maxi=INT_MIN;
	int sec = INT_MIN;
	bool chg = false;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] > maxi){
			sec = maxi;
			maxi = arr[i];
		}
		if(arr[i] < maxi && arr[i] > sec){
			sec = arr[i];
			chg = true;
		}
	}
	if(!chg){
		cout<<"NO SECOND LARGEST";
		return 0;
	} 
	else{
		cout<<sec;
		return 0;
	}
}
