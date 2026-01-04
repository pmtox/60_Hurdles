#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n ; cin>>n;
	int var = n;
	int sum = 0;
	while(n>0){
		int dig = n%10;
//		int digCube = dig * dig * dig;  //Without using pow();
		int digCube = pow(dig , 3);		//Using pow() -> math.h
		sum = sum + digCube;
		n/=10;
	}
	if(sum ==  var){
		cout<<"True";
	}else{
		cout<<"False";
	}
	return 0;
}