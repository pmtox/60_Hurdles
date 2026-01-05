#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i< n ; i++){
		cin>>arr[i];
	}
	int i = 0 ; int j = n-1;
	while(i<j){
		int k = arr[i];
		arr[i] = arr[j];
		arr[j] = k;
		i++;
		j--;
	}
	for(int it = 0 ; it< n ; it++){
		cout<<arr[it];
	}
}
