#include<iostream>
using namespace std;
int main(){
    int i; cin>>i;
    while(i--){
        string s; 
        cin>>s;
        int cnt = 0;
        if(s.size() > 10){
            cout << s[0] << s.size()-2 << s.back()<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}