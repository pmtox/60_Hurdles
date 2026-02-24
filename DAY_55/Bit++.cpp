#include<iostream>
using namespace std;
int main(){
    int y; cin>>y;
    int val = 0;
    while(y--){
        string s;
        cin >> s;
        if(s[1] == '+'){
            val++;
        }else if(s[1] == '-'){
            val--;
        }
    }
    cout<<val<<endl;
    return 0; 
}