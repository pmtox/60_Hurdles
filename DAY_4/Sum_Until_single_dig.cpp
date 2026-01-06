#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum =0;
	while(n>0){
		int dig= n%10;
		sum+=dig;
		n/=10;
	}
	while(sum > 9){
		int kg = sum%10;
		sum/=10;
		sum+=kg;
	}
	cout<<sum;
}
