#include<iostream>
using namespace std;
int main(){
	int n; cin>>n; 	// for range[n , k]
	int k; cin>>k;
	int cnt=0;
	for(int i = n; i<=k ; i++){		//using for n -> k inclusive range
		if(i%3==0 || i%5==0){
			cnt++;
		}
	}
	cout<<cnt;
}
