#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n<=1){
    	cout<<"False";
    	return 0;
	}
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n%i == 0){
        	cout<<"False";
        	return 0;
        }
    }
	cout<<"True";
	return 0;
}
