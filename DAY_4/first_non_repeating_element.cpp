#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	int re_non= 0;
	for(int i = 0 ; i< n ; i++){
		re_non = re_non ^ arr[i];
	}
	
	cout<<re_non;
}
