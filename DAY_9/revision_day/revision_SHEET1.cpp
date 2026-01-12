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