#include<iostream>
#include<vector>
using namespace std;
void sumK( vector<int> &arr , vector<int> &extraa , int ind , int n , int sum , int s){
    if(ind == n){
        if(s == sum){
            for(auto it : extraa){
            cout<< it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    
    extraa.push_back(arr[ind]);
    s += arr[ind];

    sumK(arr , extraa , ind+1 , n , sum , s);

    s -= arr[ind];
    extraa.pop_back();

    sumK(arr , extraa , ind+1 , n , sum , s);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 2;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> extraa;
    sumK( arr , extraa , 0 , n , sum , 0);
}
