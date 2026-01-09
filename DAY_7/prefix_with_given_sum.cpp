#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	int tar; cin>>tar;
	for(int i =0; i< n;i++){
		cin>>arr[i];
	}
	int sum=0;
	bool is_tr = false;
	for(int i = 0; i< n; i++){
		sum += arr[i];
		if(sum == tar){
			is_tr = true;
			break;
		}
	}
	if(is_tr){
		cout<<"TRUE";
	}
	else{
		cout<<"FALSE";
	}
	return 0;
}
