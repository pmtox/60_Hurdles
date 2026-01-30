#include<iostream>
#include<vector>
using namespace std;
void subSe(vector<int> &arr ,vector<int> &extraa , int n , int ind){
    if(ind == n){
        for(auto it : extraa){
            cout<<it<<" ";
        }
        if(extraa.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    extraa.push_back(arr[ind]);
    subSe(arr , extraa , n , ind+1);
    extraa.pop_back();
    subSe(arr , extraa , n , ind+1);
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    vector<int> extraa;
    subSe(arr ,extraa, n , 0);
    return 0;
}
