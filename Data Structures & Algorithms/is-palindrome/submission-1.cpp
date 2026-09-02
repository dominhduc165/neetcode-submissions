class Solution {
public:
    bool isPalindrome(string s) {
        string tmp="";
        for(char c : s){
            if(isalpha(c)||isdigit(c)){
                c=tolower(c);
                tmp+=c;
            }
        }
        int l=0;
        int r=tmp.size()-1;
        while(l<r){
            if(tmp[l]!=tmp[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
