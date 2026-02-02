//---APPROACH - I

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0 , j = height.size() -1;
        int maxi = 0;
        while(i < j){
            int area = min(height[i] , height[j]) * (j - i);
            maxi = max(maxi , area);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
    }
};


//---APPROACH - II



class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        for(int i =0; i< heights.size() ; i++){
            for(int j = heights.size() - 1 ; j> 0; j--){
                int heght = min(heights[j] , heights[i]);
                int width = j - i;
                maxi = max(maxi , heght * width);
            }
        }          
        return maxi;
    }
};
