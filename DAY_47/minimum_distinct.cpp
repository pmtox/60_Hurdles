// CODECHEF CONTEST GAVE TODAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ; cin>>t;
	while(t--){
	    int n , k;
	    cin>>n >> k;
	    
	    vector<int> arr(n);
	    for(int i = 0 ; i < n ; i++){
	        cin>>arr[i];
	    }
	    unordered_map<int , int> mpp;
	    for(int x : arr){
	        mpp[x]++;
	    }
	    int fstVal = arr[0];
	    vector<int>cost;
	    
	    for(auto &it: mpp){
	        if(it.first != fstVal){
	            cost.push_back(it.second);
	        }
	    }
	    sort(cost.begin() , cost.end());
	    int dis = mpp.size();
	    
	    for(int i : cost){
	        if(k >= i){
	            k-=i;
	            dis--;
	        }else{
	            break;
	        }
	    }
	    
	    cout<< dis <<endl;
	}
	return 0;
}
