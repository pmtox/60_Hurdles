// APPROACH I

#include<bits/stdc++.h>
 
using namespace std;
int main(){
    long long int x; cin>>x;
    if(x % 5 == 0){
        cout<<x/5<<endl;
    }else{
        cout<<x / 5 + 1<<endl;
    }
    return 0;
}

// APPROACH II

#include<bits/stdc++.h>
 
using namespace std;
int main(){
    long long int x; cin>>x;
    cout<< (x+4) / 5 <<endl;
    return 0;
}