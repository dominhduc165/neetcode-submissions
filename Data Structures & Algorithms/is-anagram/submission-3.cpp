class Solution {
public:
    bool isAnagram(string s, string t) {
        int dems[256]={0};
        int demt[256]={0};
        for(char c : s) dems[c-'0']++;
        for(char c : t) demt[c-'0']++;
        for(int i=0 ; i<256 ; i++){
            if(dems[i]!=demt[i]) return false;
        }
        return true;
    }
};
