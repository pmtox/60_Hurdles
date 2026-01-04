#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int rev_num=0;
    int number = n;
    while(n>0){
        int dig = n % 10;
        rev_num = rev_num*10 + dig;
        n/=10;
    }
    if(rev_num == number){
        cout<<"true ";
    }
    else{
        cout<<"false";
    }
    return 0;
}
