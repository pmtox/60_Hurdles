#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rev_num = 0;
	while(n>0){
		int dig = n%10;
		if(dig % 2 ==0){
			rev_num = rev_num * 10 + dig;
		}
		n/=10;
	}
	cout<<rev_num;
}
