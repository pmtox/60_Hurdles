class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0) return "";
        vector<int>st;
        string res = "";
        for(string& s : strs){
            st.push_back(s.size());
        }
        for(int sx : st){
            res+= to_string(sx) + ',';
        }
        res+= '#';
        for(string& s: strs){
            res+=s;
        }
        return res;

    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<int> st;
        vector<string> res;
        int i=0;
        while(s[i] != '#'){
            string cur = "";
            while(s[i] != ','){
                cur+= s[i];
                i++;
            }
            st.push_back(stoi(cur));
            i++;
        }
        i++;
        for(int sz : st){
            res.push_back(s.substr(i , sz));
            i+=sz;
        }
        return res;
        
    }
};