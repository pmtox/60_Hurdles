class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // we need to check for the longest substring 
        // WITHOUT DUPLICATES:

        int cnt = 0;
        for(int i =0; i< s.size(); i++){
            // we can use 'set' to store Unique elements;
            unordered_set<char> st;
            for(int j = i; j< s.size(); j++){
                if(st.find(s[j]) != st.end()){
                    break;
                }
                st.insert(s[j]);
            } 
            cnt = max(cnt , (int)st.size());
        }
        return cnt;
    }
};