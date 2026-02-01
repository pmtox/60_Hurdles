class Solution {
public:
    int countMonobit(int n) {
        int cnt =1;
        long long vl = 1;
        while(vl<= n){
            cnt++;
            vl = (vl << 1) | 1;
        }
        return cnt;
    }
};