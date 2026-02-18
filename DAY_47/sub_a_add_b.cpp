// CODECHEF CONTEST 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n , a , b;
	    cin>>n >>a >>b;
	    
	    if(n<a){
	        cout<<n<<endl;
	    }
	    else{
	        int d = a - b;
	        int res = b + ((n-a) % d);
	        cout<<res<<endl;
	    }
	}
	return 0;
}
