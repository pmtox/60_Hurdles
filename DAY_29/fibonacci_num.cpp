#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    int fc1 = fib(n-1);
    int fc2 = fib(n-2);
    return fc1 + fc2;
}
int main(){
    int n ; cin>>n;
    cout<<fib(n)<<endl;
}
