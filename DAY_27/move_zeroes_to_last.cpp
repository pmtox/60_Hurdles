#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ; cin>>n;
    vector<int> arr(n);
    for(int i =0; i< n ; i++){
        cin>>arr[i];
    }
    // vector<int> arr2(n, 0);
    int idx = 0;
    for(int i =0; i<n ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[idx]);
            idx++;
        }
    }
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
