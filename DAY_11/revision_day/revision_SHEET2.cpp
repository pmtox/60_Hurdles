// ARRAY PALINDROME CHECK

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    int i=0; int j = n-1;
    bool is_pal = true;
    while(i<j){
        if(arr[i] != arr[j]){
            is_pal = false;
            break;
        }
        i++;
        j--;
    }
    if(is_pal){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}


// FIRST NON REPETING ELEMENT

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    for(int i =0 ; i< n; i++){
        bool repeated = false;
        for(int j = 0; j< n; j++){
            if(i != j && arr[i] == arr[j]){
                repeated = true;
                break;
            }
        }
        if(!repeated){
            cout<<arr[i];
            return 0;
        }   
    }
    cout<<"NO NON REPEATING ELEMENT";
    return 0;
}


// LONGEST COMMON PREFIX

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i=0; i< strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j =0; j< strs.size(); j++){
                if(i >= strs[j].size() || ch != strs[j][i]){
                    return strs[0].substr(0 , i);
                }
            }
        }
        return strs[0];
    }
};


// GROUP ANAGRAMS

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>st;
        unordered_map<string , vector<string>>mpp;
        for(const auto& it : strs){
            string s = it;
            sort(s.begin() , s.end());
            mpp[s].push_back(it);

        }
        for(auto &pair : mpp ){
            st.push_back(pair.second);
        }
        return st;
    }
};



// Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        for(int i =0; i< nums.size(); i++){
            if(nums[i] != val){
                temp.push_back(nums[i]);
            }
        }
        for(int i =0; i< temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};