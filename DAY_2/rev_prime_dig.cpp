#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n; cin>>n;
	int rev_num=0;
	while(n>0){
		int dig = n%10;
		bool flag = true;
			if(dig <= 1) {
				flag = false;
			}
			for(int i = 2; i <= sqrt(dig) ; i++){
				if(dig % i == 0) {
					flag = false;
				}
			}
		if(flag){
			rev_num = rev_num*10+dig;
		}
		n/=10;
	}
	cout<<rev_num;
}
