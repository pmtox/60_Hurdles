class Solution {
public:
    void rot(vector<int>& nums , int i , int j){
        while(i < j){
            int k = nums[i];
            nums[i] = nums[j];
            nums[j] = k;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        rot(nums , 0 , n - k - 1);
        rot(nums , n-k , n-1);
        rot(nums , 0 , n-1);
    }
};