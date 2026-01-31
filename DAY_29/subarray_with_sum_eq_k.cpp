// APPROACH - I
// RECURSION WAY

class Solution {
public:
    int sub(vector<int>& nums , int k , int i , int s){
        if(i == nums.size()) return 0;
        s+= nums[i];
        
        int cnt = (s == k);
        cnt+= sub(nums , k , i+1 , s);
        return cnt;
    }
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i =0; i<nums.size(); i++){
            cnt+= sub(nums , k , i , 0);
        }
        return cnt;
    }
};


// APPROACH - II


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i =0; i< nums.size(); i++){
            int s =0;
            for(int j = i; j<nums.size(); j++){
                s+= nums[j];
                if(s == k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};