// CODECHEF CONTEST QUESTION

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // N hours
    // M pages
    // A pages
    // A * N >= M ? YES : NO;
    
    int n , m , a;
    cin>>n >> m >>a;
    
    if(a*n >= m){
        cout<<"YES" << endl;
    }else {
        cout<<"NO" << endl;
    }
    return 0;
}
