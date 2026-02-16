#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<int> arr , int l , int r){
    int sum = 0;
    for(int i = l ; i < r ; i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
    int n; cin>> n; 
    vector<int> arr(n);
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    int currSum = getSum(arr , 0 , k);
    int larSum = currSum;

    for(int i = 1 ; i <= n-k ; i++){
        currSum -= arr[i-1];
        currSum += arr[i + k - 1];
        larSum = max(currSum , larSum);
    }
    cout<<larSum << " ";
    return 0;
}
