#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	vector<int> filtered;
	filtered.push_back(arr[0]);
	for(int i = 1 ; i < n ; i++){
		if(arr[i] != arr[i-1]){
			filtered.push_back(arr[i]);
		}
	}
	
	for(int i = 0 ; i < filtered.size() ; i++){
		cout<<filtered[i]<<" ";
	}
	return 0;
}
