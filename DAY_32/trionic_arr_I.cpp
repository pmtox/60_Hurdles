class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n < 4) return false;

/*  WE GOT 0 -> n-1 !! then 

    TRIONIC ARRAY -> 0 < p < q < n-1

    according to this question we need 
    the 0 -> p as strictly increasing
    then p -> q as strictly decreasing
    then q -> n-1 as strictly increasing again.

*/

        for(int y = 1 ; y < n-2 ; y++){
            bool increment1 = true;
            for(int i = 0 ; i< y; i++){
                if(nums[i] >= nums[i+1]){
                    increment1 = false;
                    break;
                }
            }
            if(!increment1) continue;
            for(int q = y+1 ; q < n-1 ; q++){
                bool decrement = true;
                for(int j = y; j < q; j++){
                    if(nums[j] <= nums[j+1]){
                        decrement = false;
                        break;
                    }
                }
                if(!decrement) continue;
                bool increment2 = true;
                for(int x = q ; x < n-1; x++){
                    if(nums[x] >= nums[x+1]){
                        increment2 = false;
                        break;
                    }
                }
                if(increment2) return true;
            }
        }
        return false;
    }
};