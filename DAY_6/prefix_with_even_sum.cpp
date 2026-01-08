#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i< n; i++){
		cin>>arr[i];
	}
	int sum = 0;
	bool is_true = false;
	for(int i=0; i<n;i++){
		sum+= arr[i];
		if(sum % 2 == 0){
			is_true = true;
			cout<<"True";
			return 0;
		}
	}
		cout<<"False";
	return 0;
}
