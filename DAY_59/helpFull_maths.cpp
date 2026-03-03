#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
 
#define FOR(i , a) for (int i = 0 ; i < a ; i++)
#define pb push_back
 
int main(){
    
    string s;
    cin>>s;
    vi arr;
    
    FOR(i , s.length()){
       if(i % 2 == 0){
           arr.pb(s[i] - '0');
       }
    }
    sort(arr.begin() , arr.end());
    FOR(i , arr.size()){
        cout<<arr[i];
        if(i != arr.size() - 1){
            cout<<"+";
        }
    }
    return 0;
}