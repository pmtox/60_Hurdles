#include<iostream>
using namespace std;
int main(){
	int n ; cin>>n;
	int k ; cin>>k;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	k = k%n;
	int p = 0 , l = n-k-1;
		while(p<l){
			int m = arr[p];
			arr[p] = arr[l];
			arr[l] = m;
			p++; l--;
		}
	int x = n-k, y = n-1;
		while(x<y){
			int z = arr[x];
			arr[x] = arr[y];
			arr[y] = z;
			x++; y--;
		}
	int i = 0 , j = n-1;
		while(i<j){
			int o = arr[i];
			arr[i] = arr[j];
			arr[j] = o;
			i++;
			j--;
		}

//	while(k--){
//		int i = arr[n-1];
//		for(int j = n-1; j >0; j--){
//			arr[j] = arr[j-1];
//		}
//		arr[0] = i;
//	}

	for(int it = 0; it<n;it++){
		cout<<arr[it];
	}
}
