class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        long long  nums3(n+m);
        int i = 0; int j = 0; int ind = 0;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                nums3[ind] = nums1[i];
                ind++;
                i++;
            }
            else{
                nums3[ind] = nums2[j];
                ind++;
                j++;
            }
        }
        while(i < m){
            nums3[ind++] = nums1[i++];
        }
        while(j < n){
            nums3[ind++] = nums2[j++];
        }
        for(int i =0; i< m ; i++){
            if(i< m) {nums1[i] = nums3[i];}
            else {nums2[i - m] = nums3[i];}
        }
    }
};