class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k, int m) {
        
        vector<int> temp = nums;

        int n = nums.size();
        unordered_map<int,int> mpp;

        int left = 0;
        int dis = 0;
        int val = 0;
        long long ans = 0;

        for(int right = 0; right < n; right++) {

            mpp[nums[right]]++;

            if(mpp[nums[right]] == 1)
                dis++;

            if(mpp[nums[right]] == m)
                val++;

            while(dis > k) {

                if(mpp[nums[left]] == m)
                    val--;

                mpp[nums[left]]--;

                if(mpp[nums[left]] == 0)
                    dis--;

                left++;
            }

            if(dis == k && val == k) {

                int extra = 0;

                while(mpp[nums[left]] > m) {
                    mpp[nums[left]]--;
                    left++;
                    extra++;
                }

                ans += (extra + 1);
            }
        }

        return ans;
    }
};