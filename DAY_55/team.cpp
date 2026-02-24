#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int y; cin>>y;
    int cnt = 0;
    while(y--){
        int i, j , k ;
        cin>>i >>j >>k;
        
        if(i + j + k >= 2){
        cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0; 
}