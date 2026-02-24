#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ; int k;
    cin>>n >> k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int cnt = 0 , chk = arr[k-1];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= chk && arr[i] > 0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0; 
}