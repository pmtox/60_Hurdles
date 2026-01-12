#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	bool visited[n] = {false};
	for(int i = 0; i< n; i++){
		cin>>arr[i];
	}
		for(int i = 0; i<n; i++){
			if(visited[i]) continue;	
			int cnt = 1;
			for(int j = i+1 ; j<n ; j++){
				if(arr[i] == arr[j]){
					cnt++;
					visited[j] = true;
				}
			}
			cout<<arr[i]<<" = "<<cnt<<endl;	
		}
	return 0;
}
