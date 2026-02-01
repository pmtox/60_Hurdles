class Solution {
public:
    int finalElement(vector<int>& nums) {
        vector<int> ans = nums;
        int n = nums.size();
        return max(nums[0], nums[n - 1]);
    }
};