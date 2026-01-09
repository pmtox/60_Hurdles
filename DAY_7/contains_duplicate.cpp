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