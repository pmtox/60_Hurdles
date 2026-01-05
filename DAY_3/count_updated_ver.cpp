#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	bool visited[n] = {false};
	for(int i =0 ; i < n ; i++){
		cin>>arr[i];
	}
	for(int i = 0 ; i < n-1 ; i++){
		if(visited[i]) continue;
		int cnt = 1;
		bool grt2 = false;
		for(int j = i+1 ;j < n ; j++){
			if(arr[i] == arr[j]){
				cnt++;
				visited[j] = true;
				if(cnt > 1) grt2 = true;
			}	
		}
		if(grt2){
			cout<<arr[i]<<endl;
		}
	}
}
