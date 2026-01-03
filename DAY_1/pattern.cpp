#include<iostream>
using namespace std;

int main(){
	int n ; cin>>n;
	for(int i = 1 ; i < n+1; i++){
		//for rows
		for(int j =1 ; j <= i ; j++){
			//for repetition
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
