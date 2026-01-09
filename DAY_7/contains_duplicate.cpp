//APPROACH - I

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> is_there;
        for(int num : nums){
            if(is_there.count(num)){
                return true;
            }else{
                is_there.insert(num);
            }
        }
        return false;
    }
};


//APPROACH - II

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i = 0; i< n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};