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