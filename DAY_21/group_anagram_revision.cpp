class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> mpp;
        for(const auto& ch : strs){
            string sorted = ch;
            sort(sorted.begin() , sorted.end());
            mpp[sorted].push_back(ch);
        }
        for(auto &i : mpp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
