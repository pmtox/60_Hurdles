#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int num = n;
    int sum = 0;
    while(n>0){
    	int dig = n%10;
    	int prod = 1;		// re initializing is needed here
    	for(int i = dig ; i >= 1; i--){
        prod*=i;
    	}
//    	sum = sum + prod;		// Just tested the sum during reading the values due to error;
    	cout<<sum<<endl;
    	n/=10;
	}
    if(sum == num){
    	cout<<"True";
	}else{
		cout<<"False";
	}
	return 0;
}
