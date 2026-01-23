#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    vector<int> arr(n);
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    // initialization of how much XOR we want as K;

    int xr = 0;
    map<int , int> mpp;
    mpp[xr]++;
    int cnt= 0;
    for(int i =0; i< n; i++){
        xr = xr ^ arr[i];
        int x = xr ^ k;

        cnt += mpp[x];
        mpp[xr]++;
    }
    cout<<cnt<<endl;
    return 0;
}