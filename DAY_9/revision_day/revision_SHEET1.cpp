// COUNT DIGITS

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt= 0;
    while(n > 0){
        int dig = n%10;
        cnt++;
        n/=10;
    }
    cout<<cnt;
    return 0;
}


// PRINT PATTERN
//1
//12
//123
//1234
//12345

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i =1 ; i < n+1; i++){
        for(int j=1; j<= i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


// REVERSE NUMBER

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int rev_num= 0;
    while(n>0){
        int dig = n%10;
        rev_num = rev_num*10 + dig;
        n/=10;
    }
    cout<<rev_num;
}


// ARMSTRONG NUMBER

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int vr = n;
    int sum =0;
    while(n>0){
        int dig = n%10;
        sum+= dig*dig*dig;
        n/=10;
    }
    if(sum == vr){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
}


// CHECK PRIME

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool is_pr = true;
    if(n<= 1 ) {
        cout<<"FALSE";
        return 0;
    }
    for(int i =2; i< sqrt(n); i++){
        if(n%i==0){
            is_pr = false;
        }
    }
    if(is_pr){
        cout<<"TRUE";
    } else{
        cout<<"FALSE";
    }
    return 0;
}


// REVERSE ONLY EVEN DIGITS

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int rev_num =0;
    while(n>0){
        int dig = n%10;
        if(dig%2 == 0){
            rev_num=rev_num*10 + dig;
        }
        n/=10;
    }
    cout<<rev_num;
}


// COUNT ONLY EVEN DIGITS

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt =0;
    while(n>0){
        int dig = n%10;
        if(dig % 2 == 0){
            cnt++;
        }
        n/=10;
    }
    cout<<cnt;
    return 0;
}


// COUNT ONLY NUMBERS DIVISIBLE BY 3 AND 5

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt =0;
    while(n>0){
        int dig = n%10;
        if(dig % 3 == 0 || dig % 5 == 0){
            cnt++;
        }
        n/=10;
    }
    cout<<cnt;
    return 0;
}


// COUNT ODDS

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt = 0;
    while(n>0){
        int dig = n%10;
        if(dig%2 != 0){
            cnt++;
        }
        n/=10;
    }
    cout<<cnt;
    return 0;
}


// PALINDROME CHECK

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int var = n;
    int rev_num= 0;
    while(n>0){
        int dig = n%10;
        rev_num = rev_num*10 + dig;
        n/=10;
    }
    if(rev_num == var){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}


// PERFECT NUMBER

#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int var = n;
    int sum =0;
    while(n>0){
        int dig = n%10; 
        sum+= dig;
        n/=10;
    }
    if(sum == var){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}


// REVERSE ONLY PRIME NUMBER

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int rev_num = 0;
    while(n>0){
        int dig = n%10;
        bool is_pr = true;
        if(dig<= 1 ) {
            is_pr = false;
        }
        else{
            for(int i =2; i*i<= dig; i++){
                if(dig%i==0){
                    is_pr = false;
                    break;
                }
            }
        }
        if(is_pr){
            rev_num = rev_num * 10 + dig;
        }
        n/=10;
    }
    cout<<rev_num;
}


// COUNT ONLY EVEN

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=0;
    while(n>0){
        int dig = n%10;
        if(dig % 2==0){
            cnt++;
        }
        n/=10;
    }
    cout<<cnt;
}


// SECOND LARGEST DIGIT

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int maxi = INT_MIN;
    int sec_lar = INT_MIN;
    while(n>0){
        int dig = n%10;
        if(dig > maxi){
            sec_lar = maxi;
            maxi = dig;
        }
        else if(dig > sec_lar && maxi>dig){
            sec_lar = dig;
        }
        n/=10;
    }
    if(sec_lar == INT_MIN){
        cout<<"NO SECOND LARGEST";
    }else{
        cout<<sec_lar;
    }
}


// STRONG NUMBER

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum = 0;
    int var = n;
    while(n>0){
        int dig = n%10;
        int pr = 1;
        for(int i = 1; i <= dig ; i++){
            pr*= i;
        }
        sum+= pr;
        n/=10;
    }
    if(sum == var){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}


// SUM OF DIGITS

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum= 0;
    n = abs(n);  // handles negatives too
    while(n>0){
        int dig = n%10;
        sum += dig;
        n/=10;
    }
    cout<<sum;
}


// COUNT OCCURANCE OF NUMBERS
// 1 1 2 3 3 
// 1: 2
// 2: 1
// 3: 2

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int freq[10] = {0};
    int pr = n;
    if( n == 0){
        freq[0]=1;
    }
    while(n>0){
        int dig = n%10;
        freq[dig]++;
        n/=10;
    }
    for(int i =0 ; i<= 9; i++){
        if(freq[i]>0){
            cout<<i << " "<<": "<<freq[i]<<endl;
        }
    }
    return 0;
}


// COUNT OCCURANCE OF NUMBER (ARRAY)

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    bool visited[n] = {false};
    for(int i =0 ; i< n; i++){
        if (visited[i]) continue;
        int cnt = 1;
        for(int j = i+1; j< n; j++){
            if(arr[i] == arr[j]){
                cnt++;
                visited[j] = true;
            }
        }
        cout<<arr[i] << " : "<<cnt;
    }
    return 0;
}


// COUNT OCCURAANCES OF ELEMENTS > 1

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    bool visited[n] = {false};
    for(int i =0 ; i < n; i++){
        if(visited[i]) continue;
        int cnt= 1;
        for (int j = i+1; j< n; j++){
            if (arr[i] == arr[j]){
                cnt++;
                visited[j] = true;
            }
        }
        if(cnt>1){
            cout<<arr[i] << " : "<<cnt<<endl;
        }
    }
    return 0;
}