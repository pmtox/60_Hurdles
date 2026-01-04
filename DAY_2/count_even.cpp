#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int count = 0;
	while(n>0){
		int dig = n%10;
		if(dig%2 == 0){
			count++;
		}
		n/=10;
	}
	cout<<count;
	return 0;
}
