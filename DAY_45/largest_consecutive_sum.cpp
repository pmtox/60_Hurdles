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
    int currSum = getSum(arr , 0 , n-1);
    int larSum = currSum;

    for(int i = 0 ; i <= n ; i++){
        currSum -= arr[i-1];
        currSum += arr[i+1];
        larSum = max(currSum , larSum);
    }
    cout<<larSum << " ";
    return 0;
}
