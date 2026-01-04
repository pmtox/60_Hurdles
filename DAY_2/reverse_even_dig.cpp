#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int rev_eve = 0;
	while(n>0){
		int dig = n%10;		// last digit extraction
		if(dig % 2 == 0){
			rev_eve = rev_eve*10 + dig;		//checks if the digit is even or not;
		}
		n/=10;
	}
	cout<<rev_eve;
}
