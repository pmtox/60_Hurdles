class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 1 , r = n-2;
        int maxL = height[0] , maxR = height[n-1];
        int maxi = 0;
        while(l <= r){
            if(maxL < maxR){
                if(maxL < height[l]){
                    maxL = height[l];
                }else{
                    maxi+= maxL- height[l];
                }
                l++;
            }
            else{
                if(maxR < height[r]){
                    maxR = height[r];
                }else{
                    maxi+= maxR - height[r];
                }
                r--;
            }
        }     
        return maxi;
    }
};