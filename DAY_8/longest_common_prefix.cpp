class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        // OUTER LOOP → character position (prefix length)
        for(int i = 0 ; i < strs[0].size(); i++){
            char ch = strs[0][i];

            // INNER LOOP → check this character in all strings
            for(int j = 1 ; j < strs.size(); j++){
                //We started from 1 coz we want to have the same prefix of i.
                
                if(i >= strs[j].size() || ch != strs[j][i]){
                    return strs[0].substr(0 , i);
                }
            }
        }
        return strs[0];
    }
};