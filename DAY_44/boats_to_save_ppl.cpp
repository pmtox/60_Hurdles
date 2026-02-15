class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0 , cnt = 0 , j = people.size()-1;
        while(i <= j){
            int rmn = limit - people[j];
            j--;
            cnt++;
            if(i <= j && rmn >= people[i]){
                i++;
            }
        }
        return cnt;
    }
};