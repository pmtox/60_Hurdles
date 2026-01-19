class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0) return "";
        vector<int> st;
        string sm = "";
        for(string &im : strs){
            st.push_back(im.size());
        }
        for(int lm : st){
            sm += to_string(lm) + ',';
        }
        sm+='#';
        for(string &k : strs){
            sm+= k;
        }
        return sm;
    }

    vector<string> decode(string s) {
        if(s.size() == 0) return {};
        vector<int> st;
        vector<string> ans;
        int i=0;
        while(s[i] != '#'){
            string ak = "";
            while(s[i] != ','){
                ak+= s[i];
                i++;
            }
            st.push_back(stoi(ak));
            i++;
        }
        i++;
        for(int sz : st){
            ans.push_back(s.substr(i , sz));
            i+=sz;
        }
        return ans;
    }
};
