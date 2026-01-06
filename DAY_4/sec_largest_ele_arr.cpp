#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	if(n<=1) {
		cout<<"NO SECOND LARGEST" ;
		return 0;
	}
	int fst = INT_MIN;
	int sec = INT_MIN;
	for(int i = 0; i< n; i++){
		if(arr[i] > fst){
			sec = fst;
			fst = arr[i];
		}
		else if(arr[i] > sec && fst > arr[i]){
			sec = arr[i];
		}
	}
	if(sec == INT_MIN){
		cout<<"NO SECOND LARGEST";
	}else{
		cout<<sec;
	}
}
