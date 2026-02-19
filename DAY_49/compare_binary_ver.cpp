class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i =0 , j = 0;

        while( i < version1.size() || j < version2.size()){
            long a1 = 0;
            while(i < version1.size() && version1[i] != '.'){
                a1 = a1 * 10 + (version1[i] - '0');
                i++;
            }
            long a2 = 0;
            while(j < version2.size() && version2[j] != '.'){
                a2 = a2 * 10 + (version2[j] - '0');
                j++;
            }
            if(a1 < a2) return -1;
            else if(a1 > a2) return 1;

            i++;
            j++;
        }
        return 0;
    }
};