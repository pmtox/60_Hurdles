class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int sum = 0;
        string num = to_string(n);
        string k = "";
        while(n > 0){
            int dig = n  % 10;
            int prod = 1;
            for(int i = dig ; i >= 1 ; i--){
                prod *= i;
            }
            sum = sum + prod;
            k = to_string(sum);
            n/=10;
        }
        int start = 0 , cnt = 0;
        if(num.size() != k.size()) return false;
        sort(num.begin() , num.end());
        sort(k.begin() , k.end());
        while(start < num.size()){
            if(num[start] == k[start]){
                cnt++;
            }
            start++;
        }
        if(cnt >= num.size()){
            return true;
        }
        return false;
    }
};