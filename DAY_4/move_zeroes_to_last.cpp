#include<iostream>
using namespace std;
int main(){
	int n ; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
//	bool swapped;
//    for (int i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] == 0) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped)
//            break;


	int j = -1;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == 0){
			j = i;
			break;
		}
	}
	
	if(j == -1) {
		for(int it = 0; it<n;it++){
			cout<<arr[it] <<" ";
		}
		return 0;
	}
	
	for(int i = j+1 ; i < n ; i++){
		if(arr[i] != 0){
			swap(arr[i] , arr[j]);
			j++;
		}
	}
	
	for(int it = 0; it<n;it++){
		cout<<arr[it] <<" ";
	}
	return 0;
}
