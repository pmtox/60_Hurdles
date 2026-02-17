class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mpp;
        for(int i = 0 ; i < nums.size(); i++){
            int conc = target - nums[i];
            if(mpp.find(conc) != mpp.end()){
                return {mpp[conc] , i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};