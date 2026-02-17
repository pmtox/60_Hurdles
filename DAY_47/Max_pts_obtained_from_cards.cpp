class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0 , rSum = 0 , n = cardPoints.size() , maxSum = 0;
        for(int i = 0 ; i <= k-1 ; i++){
            lSum += cardPoints[i];
            maxSum = lSum;
        }
        int rSide = n-1;
        for(int i = k-1 ; i >= 0 ; i--){
            lSum -= cardPoints[i];
            rSum += cardPoints[rSide];
            rSide--;

            maxSum = max(maxSum , lSum + rSum);
        }  
        return maxSum;
    }
};