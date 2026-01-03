#include<iostream>
using namespace std;
int main(){
	
	//Initialize the number;
	int n; 
	cin>>n;
	
	//it will count our digits;
	int cnt = 0;
	
	
	while(n>0){
			// Initialize the last digit of the given number;
		int dig = n % 10;
			// Increment by  1 if last digin is found;
		cnt++;
			// Cut off the decimal part
		n/=10;
	}
	//Print the cnt (COUNT) of digits.
	cout<<cnt<<endl;
	return 0;
}
