class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt1 = 1 , cnt2 = 0; int cnt =0;
        for(int i = 1 ; i < s.size(); i++){
            if(s[i] != s[i-1]){
                cnt+= min(cnt1 , cnt2);
                cnt2 = cnt1;
                cnt1 = 1;
            } else{
                cnt1++;
            }
        }
        cnt+= min(cnt1 , cnt2);
        return cnt;
    }
};