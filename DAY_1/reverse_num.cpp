#include<iostream>
using namespace std;

int main(){
	
    int n; 					// number declaration
    cin>>n; 				//getting the input from user.
    int rev_num = 0; 		//Initialize the reversed number as 0
    
    while(n>0){
    		//initialize a digit variable that gives us the after decimal value
    	int dig = n % 10;  			
			//Update the reversed number in rev_num		
    	rev_num = rev_num*10 + dig;
    		//After storing the reversed number divide the number by 10 to move one place back.
    	n/= 10;
	}
	cout<<rev_num<<endl; 		//print the reversed number;
    return 0;
}
