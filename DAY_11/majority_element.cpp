//APPROACH - I

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mpp;
        for(int i =0; i< n ; i++){
            mpp[nums[i]]++;
        }
        n = n/2;
        for(auto it : mpp){
            if(it.second>n){
                return it.first;
            }
        }
        return 0;
    }
};

//APPROACH - II

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i< n ; i++){
            int count = 0;
            for(int j =0; j< n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > n/2){
                return nums[i];
            }
        }
        return -1;
    }
};
