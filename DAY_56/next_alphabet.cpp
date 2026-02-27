#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int k = c+1;
    if(c == 'z') cout<<"a";
    else{
        cout<<char(k)<<endl;    
    }
    return 0;
}