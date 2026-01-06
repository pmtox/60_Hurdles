#include<iostream>
using namespace std;
int main(){
	int n ; cin>>n;
	int rev_odd = 0;
	while(n>0){
		int dig = n%10;
		if(dig % 2 != 0){
			rev_odd = rev_odd*10 + dig;
		}
		n/=10;
	}
	cout<<rev_odd;
}
