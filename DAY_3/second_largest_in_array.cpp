#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	
	if (n < 2) {
    	cout << "No SECOND LARGEST";
        return 0;
    }
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	int maxi = INT_MIN;
	int sec_lar = INT_MIN;
	for(int i = 0 ; i < n ; i++){
		if(maxi < arr[i]){
			sec_lar = maxi;
			maxi = arr[i];
		}
		else if(arr[i] > sec_lar && maxi > arr[i]){
			sec_lar = arr[i];
		}
	}
	if(sec_lar == INT_MIN){
		cout<<"No SECOND LARGEST";
	} else{
		cout<<sec_lar;
	}
	return 0;
}
