//APPROACH - I

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        if(s == t){
            return true;
        }
        return false;
    }
};

//APPROACH - II

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char , int> cntS;
        unordered_map<char , int> cntT;

        for(int it= 0 ; it< s.size() ; it++){
            cntS[s[it]]++;
        }
        for(int it= 0 ; it < t.size() ; it++){
            cntT[t[it]]++;
        }
        return cntS == cntT;
    }
};
