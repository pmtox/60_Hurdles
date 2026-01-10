//APPROACH - I

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mpp;
        for(int i = 0; i < nums.size() ; i++){
            int tr = target - nums[i];
            if(mpp.find(tr) != mpp.end()){
                return {mpp[tr] , i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

//APPROACH - II

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum =0;
        for(int i = 0; i< nums.size() ; i++){
            for(int j = i+1; j< nums.size() ;j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    return {i , j};
                }
            }
        }
        return {};
    }
};