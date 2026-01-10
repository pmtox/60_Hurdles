//APPROACH - I

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mpp;
        for(const auto&s : strs){
            string sorted = s;
            sort(sorted.begin() , sorted.end());
            mpp[sorted].push_back(s);
        }
        vector<vector<string>> st;
        for(auto& pair : mpp){
            st.push_back(pair.second);
        }
        return st;
    }
};

//APPROACH - II

