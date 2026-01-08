#include<iostream>
using namespace std;
int main(){
	int n ; cin>>n;
	int arr[n];
	for(int i = 0; i < n ; i++){
		cin>>arr[i];
	}
	int i = 0 ; int j = n-1;
	bool is_pal = true;
	while(i<j){
		if(arr[i] != arr[j]){
			is_pal = false;
		}
		i++;
		j--;
	}
	if(is_pal){
		cout<<"TRUE";
	}else{
		cout<<"FALSE";
	}
	return 0;
}
