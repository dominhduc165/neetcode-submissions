class Solution {
public:
    bool isAnagram(string s, string t) {
        int d1[256]={0};
        int d2[256]={0};
        for(char c:s) d1[c-'0']++;
        for(char c:t) d2[c-'0']++;
        for(int i=0 ; i<256 ; i++){
            if(d1[i]!=d2[i]) return false;
        }
        return true;
    }
};
