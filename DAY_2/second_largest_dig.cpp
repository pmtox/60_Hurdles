#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	cout<<n;
	int maxi = -1;
	int sec_lar = -1;
	while(n>0){
		int dig = n%10;
		if(dig > maxi){
			sec_lar = maxi;
			maxi = dig;
		}
		else if(dig < maxi && dig > sec_lar){
			sec_lar = dig;
		}
		n/=10;
	}
	cout<<sec_lar;
}
