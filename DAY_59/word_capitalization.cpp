// APPROACH I 

//bitwise thing for toupper()

#include<bits/stdc++.h>
 
using namespace std;
int main(){
    string s , r;
    cin>>s;
    stringstream iss(s);
    char a;
    iss>>a;
    a = char( a & ~32);
    cout<<a;
    getline(iss , r);
    cout<<r<<endl;
    return 0;
}

// APPROACH II

#include<bits/stdc++.h>
 
using namespace std;
int main(){
    string s;
    cin>>s;
    s[0] = toupper(s[0]);
    cout<<s;
    return 0;
}
